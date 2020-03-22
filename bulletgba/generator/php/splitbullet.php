#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

class SplitBullet
{
  var $document;
  var $uniqID;

  var $bulletmlNode;
  var $listDefLabel;

  function SplitBullet($doc) {
    $this->document = $doc;
    $this->bulletmlNode = Common::getBulletMLNode($this->document);
    $this->uniqID = $this->bulletmlNode->getAttribute('uniqID');
    $this->listDefLabel = array();
  }

  function doConv() {
    while ($this->split());
    return $this->document;
  }

  function pushDef($elem) {
    // push bulletDef
    $def = $this->document->createElement("bulletDef");
    foreach ($elem->childNodes as $e) {
      $def->appendChild($e->cloneNode(true));
    }
    $label = sprintf('bullet_%s_%s', md5($this->document->saveXML($def)), $this->uniqID);

    if ($this->listDefLabel[$label] == NULL) {
      $def->setAttribute('label', $label);
      $this->bulletmlNode->appendChild($def);
      $this->listDefLabel[$label] = true;
    }

    return $label;
  }

  function split() {
    // process by most internal node.
    $list = $this->document->getElementsByTagName('bullet');
    if ($list->length == 0) {
      return false;
    }

    $elem = $list->item($list->length - 1);
    if ($elem->hasChildNodes()) {
      $label = $this->pushDef($elem);

      // push doBullet
      $callElem = $this->document->createElement("bulletCall");
      $callElem->setAttribute('label', $label);
      $elem->parentNode->replaceChild($callElem, $elem);
    } else {
      $elem->parentNode->removeChild($elem);
    }
    return true;
  }
}

if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();
  $destFile = Common::getDestFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile, LIBXML_NSCLEAN);

  $splitbullet = new SplitBullet($doc);
  $doc = $splitbullet->doConv();

  $doc->save($destFile);
}

?>
