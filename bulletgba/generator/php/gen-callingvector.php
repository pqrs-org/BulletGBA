#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

define('MAX_REPEAT_TIMES', 20000);

require_once sprintf('%s/libcommon.php', dirname(__FILE__));
require_once sprintf('%s/libgenerate.php', dirname(__FILE__));

class GenCallingVector
{
  var $document;
  var $listDefinition; /**< list of ALL stepfunc labels. */
  var $hashStepFuncVector;

  var $xmlfile;

  var $hppFileHandle;
  var $cppFileHandle;

  var $listSize; /**< To gauge StepFuncVector size */

  function GenCallingVector($doc, $xmlfile) {
    $this->document = $doc;
    $this->xmlfile = $xmlfile;

    $this->listDefinition = array();
    $this->hashStepFuncVector = array();
  }

  // static
  function getCPPHPPFileName($srcFile) {
    $filename = Common::getTmpFile("05-gen-callingvector", $srcFile);
    @mkdir(dirname($filename), 0700, true);

    $barrageName = basename($filename, '.xml');
    $filename = sprintf("%s/%s", dirname($filename), $barrageName);

    return array(
      'cpp' => "{$filename}.cpp",
      'hpp' => "{$filename}.hpp",
      );
  }

  function doConv() {
    $filename = $this->getCPPHPPFileName($this->xmlfile);

    $this->cppFileHandle = fopen($filename['cpp'], "w");
    $this->hppFileHandle = fopen($filename['hpp'], "w");

    $hppID = sprintf("GENERATED_%s_HPP", md5_file($this->xmlfile));
    fputs($this->hppFileHandle, "#ifndef {$hppID} \n");
    fputs($this->hppFileHandle, "#define {$hppID} \n\n");
    fputs($this->hppFileHandle, "#include \"bullet.hpp\" \n\n");

    $this->parseStepFuncDef();
    $this->outputCallingVector();

    fputs($this->hppFileHandle, "\n\n");
    foreach ($this->hashStepFuncVector as $label => $size) {
      fputs($this->hppFileHandle, "extern const BulletStepFunc {$label}[]; \n");
      fputs($this->hppFileHandle, "const unsigned int {$label}_size = $size; \n");
    }

    fputs($this->hppFileHandle, "\n\n");
    fputs($this->hppFileHandle, "#endif \n\n");
    fclose($this->hppFileHandle);
    fclose($this->cppFileHandle);
  }

  function parseStepFuncDef() {
    foreach ($this->document->getElementsByTagName('stepfuncDef') as $elem) {
      $label = $elem->getAttribute('label');
      $this->listDefinition[$label] = $elem;
    }
  }

  function outputCallingVector() {
    foreach ($this->document->getElementsByTagName('bulletDef') as $elem) {
      $label = $elem->getAttribute('label');

      fprintf($this->cppFileHandle, "extern const BulletStepFunc ${label}[] = { \n");

      $list = $elem->getElementsByTagName('stepfuncCall');
      if ($list->length == 0) {
        Common::error("No stepfuncCall in bulletDef");
      }

      $this->listSize = 0;
      foreach ($list as $e) {
        $labelStepFunc = $e->getAttribute('label');
        $this->getStepFuncCallingVector($labelStepFunc, false);
      }
      fprintf($this->cppFileHandle, "NULL}; \n");
      $this->listSize += 1;

      $this->hashStepFuncVector[$label] = $this->listSize;
    }
    // output funcDecl
    foreach (array_keys($this->funcDecl) as $func) {
      fprintf($this->hppFileHandle, "void $func(BulletInfo *p); \n");
    }
  }

  function outputStepFunc($label, $declOnly) {
    $this->funcDecl[$label] = true;
    if (! $declOnly) {
      fprintf($this->cppFileHandle, "%s,\n", $label);
      $this->listSize += 1;
    }
  }

  function getStepFuncCallingVector($label, $declOnly) {
    $elem = $this->listDefinition[$label];

    if (! $elem->hasChildNodes()) {
      Common::error("Empty StepFunc");
    }

    $list = $elem->getElementsByTagName('repeat');
    if ($list->length == 0) {
      $this->outputStepFunc($elem->getAttribute('label'), $declOnly);
      return;
    }

    foreach ($list as $e) {
      $repeat = new Repeat($e);

      if ($repeat->nowait) {
        $this->outputStepFunc($elem->getAttribute('label'), $declOnly);

        foreach ($repeat->listStepFuncCall as $call) {
          $label = $call->getAttribute('label');
          $this->getStepFuncCallingVector($label, true);
        }

      } else {
        if ($repeat->times > MAX_REPEAT_TIMES) {
          Common::error("Too many Repeat count!");
        }
        for ($i = 0; $i < $repeat->times; ++$i) {
          foreach ($repeat->listStepFuncCall as $call) {
            $label = $call->getAttribute('label');
            $this->getStepFuncCallingVector($label, $declOnly);
          }
        }
      }
    }
  }
}


if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile, LIBXML_NSCLEAN);

  $gen = new GenCallingVector($doc, $srcFile);
  $gen->doConv();
}

?>
