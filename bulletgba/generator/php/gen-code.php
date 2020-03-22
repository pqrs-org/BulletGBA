#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

define('MAX_REPEAT_TIMES', 20000);

require_once sprintf('%s/libcommon.php', dirname(__FILE__));
require_once sprintf('%s/libgenerate.php', dirname(__FILE__));

class Direction
{
  var $type = NULL;
  var $value = NULL;

  function Direction($elem = NULL) {
    if ($elem != NULL) {
      $this->type = $elem->getAttribute('type');
      if ($this->type == NULL) {
        $this->type = 'aim';
      }

      $this->value = $elem->nodeValue;
      if ($GLOBALS['horizontal']) {
        if ($this->type == "absolute") {
          $this->value = "({$this->value}) - 90";
        }
      }
      $this->value = Common::convSpecialChar($this->value);
      $this->value = Common::adjustAngle($this->value);
    }
  }

  function toCode() {
    if ($this->value !== NULL) { // compare with !== for when value == '0'.
      switch($this->type) {
        case "aim":
          return sprintf('SelfPos::getAngle(p) + (%s)', $this->value);
        case "sequence":
          return sprintf('p->lastBulletAngle + (%s)', $this->value);
        case "relative":
          return sprintf('p->getAngle() + (%s)', $this->value);
        case "absolute":
          return sprintf('(%s)', $this->value);
          //return sprintf('(%s * -90 / 360) + (%s)', ANGLENUM, $this->value);
        default:
          Common::error('Not Supported in Direction');
          break;
      }
    }
    return "(SelfPos::getAngle(p))";
  }
}

class Speed
{
  var $type = NULL;
  var $value = NULL;

  function Speed($elem = NULL) {
    if ($elem != NULL) {
      $this->type = $elem->getAttribute('type');
      if ($this->type == NULL) {
        $this->type = 'absolute';
      }
      $this->value = $elem->nodeValue;
      $this->value = Common::convSpecialChar($this->value);
    }
  }

  function toCode() {
    if ($this->value !== NULL) { // compare with !== for when value == '0'.
      switch ($this->type) {
        case 'relative':
          return sprintf('p->getSpeed() + (%s)', $this->value);
          break;
        case 'sequence':
          return sprintf('p->lastBulletSpeed + (%s)', $this->value);
        case 'absolute':
          return sprintf('(%s)', $this->value);
        default:
          Common::error("Not Supported in Speed ({$this->type})");
          break;
      }
    }
    return '1';
  }
}

class Term
{
  var $value = NULL;

  function Term($elem) {
    $this->value = Common::convSpecialChar($elem->nodeValue);
  }

  function toCode() {
    if (strstr($this->value, 'FixedPointNum') === FALSE) {
      return $this->value;
    } else {
      return "({$this->value}).toInt()";
    }
  }
}

class ChangeDirection
{
  var $direction = NULL;
  var $term = NULL;

  function ChangeDirection($elem) {
    foreach ($elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'direction':
          $this->direction = new Direction($e);
          break;
        case 'term':
          $this->term = new Term($e);
          break;
        default:
          Common::error('Not Supported in ChangeDirection');
          break;
      }
    }
  }

  function generateCode($outputFileResource) {
    print "{\n";
    printf("  u16 life = static_cast<u16>(%s);", $this->term->toCode());
    print "  FixedPointNum speed = ";

    switch ($this->direction->type) {
      case 'sequence':
        print $this->direction->value;
        break;

      default:
        $speed = sprintf('%s - p->getAngle()', $this->direction->toCode());
        if ($this->term->value == '1') {
          print $speed;
        } else {
          print "FixedPointNum($speed, life)";
        }
        break;
    }

    print ";";
    print "p->setRound(speed, life);";
    print "}\n";
  }
}


class ChangeSpeed
{
  var $speed = NULL;
  var $term = NULL;

  function ChangeSpeed($elem) {
    foreach ($elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'speed':
          $this->speed = new Speed($e);
          break;
        case 'term':
          $this->term = new Term($e);
          break;
        default:
          Common::error('Not Supported in ChangeSpeed');
          break;
      }
    }
  }

  function generateCode($outputFileResource) {
    print "{\n";
    printf("  u16 life = static_cast<u16>(%s);", $this->term->toCode());
    print "  FixedPointNum speed = ";

    switch ($this->speed->type) {
      case 'sequence':
        print $this->speed->value;
        break;

      case 'relative':
        $speed = "p->getSpeed() + {$this->speed->value}";
        if ($this->term->value == '1') {
          print $speed;
        } else {
          print "FixedPointNum($speed, life)";
        }
        break;

      default:
        $speed = "{$this->speed->value} - p->getSpeed()";
        if ($this->term->value == '1') {
          print $speed;
        } else {
          print "FixedPointNum($speed, life)";
        }
        break;
    }

    print ";";
    print "p->setAccel(speed, life);";
    print "}\n";
  }
}

class Fire
{
  var $elem = NULL;
  var $direction = NULL;
  var $speed = NULL;
  var $bulletLabel = NULL;

  function Fire($elem) {
    $this->elem = $elem;

    foreach ($elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'direction':
          $this->direction = new Direction($e);
          break;
        case 'speed':
          $this->speed = new Speed($e);
          break;
        case 'bulletCall':
          $this->bulletLabel = $e->getAttribute('label');
          break;
        default:
          Common::error("Not Supported in Fire ({$e->nodeName})");
          break;
      }
    }
    if ($this->direction == NULL) {
      $this->direction = new Direction();
    }
    if ($this->speed == NULL) {
      $this->speed = new Speed();
    }

    $this->form = $this->elem->getAttribute('form');
    $this->life = $this->elem->getAttribute('life');
  }

  function outputCode() {
    $angleCode = $this->direction->toCode();
    $speedCode = $this->speed->toCode();

    $stepFuncList = "StepFunc::nullStepFuncList";
    if ($this->bulletLabel) {
      $stepFuncList = $this->bulletLabel;
    }
    //$type = 'BULLET_TYPE_NORMAL';
    $type = "p->getType() << 1";
    if ($this->form == 'root') {
      $type = 'BULLET_TYPE_ROOT';
    } else if ($this->form == "middle") {
      $type = 'BULLET_TYPE_DIRECTION';
    } else if ($this->form == "thin") {
      $type = 'BULLET_TYPE_THIN';
    } else if ($this->form == "small") {
      $type = 'BULLET_TYPE_SMALL';
    } else if ($this->form == "invincible") {
      $type = 'BULLET_TYPE_INVINCIBLE';
    } else if ($this->form == "hidden") {
      $type = 'BULLET_TYPE_HIDDEN';
    }

    print "{ \n";
    print "  BulletInfo *bi;";
    print "  p->lastBulletAngle = $angleCode;";
    print "  p->lastBulletSpeed = $speedCode;";
    print "  bi = ListBullets::makeNewBullet();";
    print "  if (bi != NULL) {";
    print "    bi->initialize({$type}, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, {$stepFuncList}); \n";
    if ($this->life != NULL) {
      print "    bi->setLife({$this->life}); \n";
    }
    print "  }\n";
    print "}\n";
  }
}

class StepFunc
{
  var $elem;

  function StepFunc($elem) {
    $this->elem = $elem;
  }

  function doConv() {
    $label = $this->elem->getAttribute('label');
    print "void ${label}(BulletInfo *p) { \n";

    foreach ($this->elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'repeat':
          $repeat = new Repeat($e);
          if ($repeat->nowait) {
            print "for (u32 i = 0; i < {$repeat->times}; ++i) { \n";
            foreach ($e->getElementsByTagName('stepfuncCall') as $call) {
              printf("%s(p);", $call->getAttribute('label'));
            }
            print "}\n";
          }
          break;

        case 'fire':
          $newelem = new Fire($e);
          $newelem->outputCode($outputFileResource);
          break;

        case 'changeDirection':
          $newelem = new ChangeDirection($e);
          $newelem->generateCode($outputFileResource);
          break;

        case 'changeSpeed':
          $newelem = new ChangeSpeed($e);
          $newelem->generateCode($outputFileResource);
          break;

        case 'wait':
          $wait = Common::convSpecialChar($e->nodeValue);
          if (strstr($wait, 'FixedPointNum') === FALSE) {
            print "p->wait = static_cast<u16>({$wait}); \n";
          } else {
            print "p->wait = ({$wait}).toInt(); \n";
          }
          break;

        case 'vanish':
          print "ListBullets::stepFuncDrop(p);";
          break 2;

        default:
          Common::error("Not Supported in StepFunc {$e->nodeName} {$e->nodeValue}");
          break;
      }
    }

    print "}\n";
  }
}

class Generator
{
  var $document;
  var $uniqID;

  var $barrageGroup;
  var $barrageName;

  var $bulletmlNode;
  var $stepfuncHash;

  function Generator($doc, $barrageGroup, $barrageName) {
    $this->document = $doc;
    $this->barrageGroup = $barrageGroup;
    $this->barrageName = $barrageName;

    $this->bulletmlNode = Common::getBulletMLNode($this->document);
    $this->uniqID = $this->bulletmlNode->getAttribute('uniqID');

    $this->stepfuncHash = array();

    if (Common::getBulletMLNode($this->document)->getAttribute('type') == 'horizontal') {
      $GLOBALS['horizontal'] = true;
    }
  }

  function doConv() {
    $this->parseCallingVectorFile();

    $this->outputHeader();
    print "\n\n";

    print "#include \"{$this->barrageGroup}/{$this->barrageName}.hpp\" \n\n";
    $cppfilename = "tmp/05-gen-callingvector/{$this->barrageGroup}/{$this->barrageName}.cpp";
    readfile($cppfilename);

    $this->outputStepFunc();
    print "\n\n";
    $this->outputTopFire();
    print "\n\n";
  }

  function outputHeader() {
    print "// XXX uniqID XXX {$this->uniqID} XXX \n\n";
    $listInclude = array(
      '#include <gba_types.h>',
      '#include "bullet.hpp"',
      '#include "fixed.hpp"',
      '',
      );
    print join("\n", $listInclude);
  }

  function parseCallingVectorFile() {
    $this->stepfuncHash = array();

    $filename = "tmp/05-gen-callingvector/{$this->barrageGroup}/{$this->barrageName}.hpp";
    if (! file_exists($filename)) {
      Common::error("$filename not found!");
    }

    $fp = fopen($filename, "r");
    while (! feof($fp)) {
      $line = fgets($fp);
      if (preg_match('/(stepfunc_.+?)\(/', $line, $matches)) {
        $this->stepfuncHash[$matches[1]] = true;
      }
    }
    fclose($fp);
  }

  function outputStepFunc() {
    foreach ($this->document->getElementsByTagName('stepfuncDef') as $elem) {
      $label = $elem->getAttribute('label');
      if ($this->stepfuncHash[$label]) {
        $stepfunc = new StepFunc($elem);
        $stepfunc->doConv();
      }
    }
  }

  function outputTopFire() {
    print "BulletInfo *genBulletFunc_{$this->uniqID}(FixedPointNum posx, FixedPointNum posy) {";
    print "  BulletInfo * bi;";

    foreach ($this->document->getElementsByTagName('topFire') as $elem) {
      print "  bi = ListBullets::makeNewBullet();";
      $bulletCall = $elem->getElementsByTagName('bulletCall')->item(0);
      if ($bulletCall) {
        $label = $bulletCall->getAttribute('label');
        // sync to Shiroi-Danmakukun's motion.
        print "  if (bi != NULL) {";
        print "    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, {$label}); \n";
        print "  }\n";
      }
    }
    print "return bi;";
    print "}\n";
  }
}

if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile, LIBXML_NSCLEAN);

  $barrageGroup = basename(dirname($srcFile));
  $barrageName = basename($srcFile, '.xml');

  $generator = new Generator($doc, $barrageGroup, $barrageName);
  $doc = $generator->doConv();
}

?>
