#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

class MakeStepFunc
{
  var $document;
  var $uniqID;

  var $bulletmlNode;
  var $listDefLabel;

  function MakeStepFunc($doc) {
    $this->document = $doc;
    $this->bulletmlNode = Common::getBulletMLNode($this->document);
    $this->uniqID = $this->bulletmlNode->getAttribute('uniqID');
    $this->listDefLabel = array();
  }

  function doConv() {
    while ($this->action2stepfunc());
    return $this->document;
  }

  function pushDef($def) {
    $label = sprintf('stepfunc_%s_%s', md5($this->document->saveXML($def)), $this->uniqID);

    if ($this->listDefLabel[$label] == NULL) {
      $def->setAttribute('label', $label);
      $this->bulletmlNode->appendChild($def);
      $this->listDefLabel[$label] = true;
    }

    return $label;
  }

  function makeCallElem($label) {
    $callElem = $this->document->createElement("stepfuncCall");
    $callElem->setAttribute('label', $label);
    return $callElem;
  }

  function action2stepfunc() {
    // process by most internal node.
    $list = $this->document->getElementsByTagName('action');
    if ($list->length == 0) {
      return false;
    }

    $elem = $list->item($list->length - 1);

    $stepfunc = $this->document->createElement('stepfuncDef');
    $listCallElem = array();

    foreach ($elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'repeat':
          if ($e->getAttribute('nowait') != NULL) {
            $stepfunc->appendChild($e->cloneNode(true));
          } else {
            if ($stepfunc->hasChildNodes()) {
              $label = $this->pushDef($stepfunc);
              $callElem = $this->makeCallElem($label);
              $listCallElem[] = $callElem;
            }
            $stepfunc = $this->document->createElement('stepfuncDef');
            $stepfunc->appendChild($e->cloneNode(true));
            $label = $this->pushDef($stepfunc);
            $callElem = $this->makeCallElem($label);
            $listCallElem[] = $callElem;

            $stepfunc = $this->document->createElement('stepfuncDef');
          }
          break;

        case 'wait':
          $stepfunc->appendChild($e->cloneNode(true));

          $label = $this->pushDef($stepfunc);

          $callElem = $this->makeCallElem($label);
          $listCallElem[] = $callElem;

          $stepfunc = $this->document->createElement('stepfuncDef');
          break;

        default:
          $stepfunc->appendChild($e->cloneNode(true));
      }
    }
    if ($stepfunc->hasChildNodes()) {
      $label = $this->pushDef($stepfunc);
      $callElem = $this->makeCallElem($label);
      $listCallElem[] = $callElem;
    }

    foreach ($listCallElem as $e) {
      $elem->parentNode->insertBefore($e, $elem);
    }
    $elem->parentNode->removeChild($elem);
    return true;
  }
}

if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();
  $destFile = Common::getDestFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile);

  $makestepfunc = new MakeStepFunc($doc);
  $doc = $makestepfunc->doConv();

  $doc->save($destFile);
}

?>
