<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

; // add semicolon for Emacs php-mode indent issue.

ini_set('max_execution_time', 0);
define('ANGLENUM', 256);

class Common
{
  function getSrcFile() {
    $file = $_SERVER['argv'][1];
    if (! file_exists($file)) {
      Common::error("File {$file} is not exist!");
      exit;
    }
    return $file;
  }

  function getDestFile() {
    $file = $_SERVER['argv'][2];

    if (! file_exists(dirname($file))) {
      @mkdir(dirname($file), 0700, true);
    }

    return $file;
  }

  function getTmpFile($name, $origfile) {
    $file = sprintf('tmp/%s/%s/%s',
                    $name,
                    basename(dirname($origfile)),
                    basename($origfile));
    return $file;
  }

  function getCodeFile($srcFile) {
    $file = sprintf('data/code/%s/%s.cpp',
                    basename(dirname($srcFile)),
                    basename($srcFile, '.xml'));
    if (! file_exists(dirname($file))) {
      @mkdir(dirname($file), 0700, true);
    }
    return $file;
  }

  function isSrcFileNew($srcFile, $destFile) {
    if (! file_exists($destFile)) {
      return true;
    }
    if (filemtime($srcFile) > filemtime($destFile)) {
      return true;
    }
    return false;
  }

  // ------------------------------------------------------------
  function adjustAngle($text) {
    return "FixedPointNum::degree2angle({$text})";
  }

  function integer2double($matches) {
    if (preg_match('/\./', $matches[0])) {
      return $matches[0];
    } else {
      return "{$matches[0]}.0";
    }
  }

  function convSpecialChar($text) {
    $conved = str_replace('$rank', '1', $text);
    $conved = preg_replace('/\$rand/', 'FixedPointNum::random()', $conved);

    $conved = preg_replace_callback('/[\d\.]+/', array('Common', 'integer2double'), $conved);

    return $conved;
  }

  function dropSpecialChar($text) {
    $text = preg_replace('/\$rand/', '1', $text);
    $text = preg_replace('/\$rank/', '1', $text);
    return $text;
  }

  function error($message) {
    error_log("$$$ [ERROR] ($message) $$$");
    exit(1);
  }

  function getTopElementByName($domElem, $name) {
    if ($domElem->nodeName == $name) {
      return $domElem;
    }

    if (! $domElem->hasChildNodes()) {
      return NULL;
    }
    foreach ($domElem->childNodes as $childNodes) {
      $node = Common::getTopElementByName($childNodes, $name);
      if ($node !== NULL) {
        return $node;
      }
    }
    return NULL;
  }

  function getBulletMLNode($document) {
    return $document->getElementsByTagName('bulletml')->item(0);
  }
}

?>
