#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

class Reference
{
  var $type;
  var $label;
  var $param = array();

  function Reference($elem) {
    $this->type = $elem->nodeName;
    $this->label = $elem->getAttribute('label');

    foreach ($elem->childNodes as $e) {
      if ($e->nodeName == 'param') {
        $this->param[] = $e->nodeValue;
      } else {
        if ($e->nodeType != XML_TEXT_NODE) {
          Common::error("Not Supported in Reference ({$e->nodeName}, {$e->nodeValue})");
        }
      }
    }
  }

  function replace_callback($matches) {
    $idx = intval($matches[1]) - 1;
    $value = $this->param[$idx];
    if ($value == NULL) {
      $value = 0;
    }
    return "($value)";
  }
}


class ReplaceReference
{
  var $document;
  var $bulletmlNode;
  var $definition = array();

  function ReplaceReference($doc) {
    $this->document = $doc;
    $this->bulletmlNode = Common::getBulletMLNode($this->document);
    $this->setupDefinition('action');
    $this->setupDefinition('bullet');
    $this->setupDefinition('fire');
  }

  function setupDefinition($nodeName) {
    $this->definition[$nodeName] = array();
    foreach ($this->document->getElementsByTagName($nodeName) as $elem) {
      $label = $elem->getAttribute('label');
      if ($label != NULL) {
        $this->definition[$nodeName][$label] = $elem->cloneNode(true);
      }
    }
  }

  function doConv() {
    while ($this->replace());
    return $this->document;
  }

  function detectReferenceLoop($elem) {
    $label = $elem->getAttribute('label');
    $parentNode = $elem->parentNode;
    while ($parentNode->nodeName != 'bulletml') {
      if ($parentNode->getAttribute('label') == $label) {
        error_log("[ERROR] Detect Reference Loop");
        exit(1);
      }
      $parentNode = $parentNode->parentNode;
    }
  }

  function replace() {
    $keys = array('actionRef', 'fireRef', 'bulletRef');

    foreach ($keys as $nodeName) {
      $elem = $this->document->getElementsByTagName($nodeName)->item(0);
      if ($elem) {
        $this->detectReferenceLoop($elem);

        $reference = new Reference($elem);
        $targetNodeName = str_replace('Ref', '', $elem->nodeName);

        $newelem = $this->definition[$targetNodeName][$reference->label]->cloneNode(true);
        $this->applyParam($newelem, $reference);
        $elem->parentNode->replaceChild($newelem, $elem);
        return true;
      }
    }
    return false;
  }

  function applyParam(&$elem, $reference) {
    if ($elem->nodeType == XML_TEXT_NODE) {
      $elem->nodeValue = preg_replace_callback('/\$(\d+?)/', array($reference, 'replace_callback'), $elem->nodeValue);
    } else {
      if (! $elem->hasChildNodes()) {
        return;
      }
      foreach ($elem->childNodes as $e) {
        $this->applyParam($e, $reference);
      }
    }
  }
}

if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();
  $destFile = Common::getDestFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile);

  $replaceReference = new ReplaceReference($doc);
  $doc = $replaceReference->doConv();

  $doc->save($destFile);
}

?>
