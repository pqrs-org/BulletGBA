#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/php/libcommon.php', dirname(__FILE__));

function doCopy($srcFile) {
  $xml = iconv('SJIS', 'UTF-8//IGNORE', file_get_contents($srcFile));

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  if ($doc->loadXML($xml) == FALSE) {
    error_log("[ERROR] error in $file");
    return;
  }

  $group = NULL;
  $filename = NULL;

  $group = trim($doc->getElementsByTagName('group')->item(0)->nodeValue);
  $filename = trim($doc->getElementsByTagName('filename')->item(0)->nodeValue);

  if ($group === NULL || $filename === NULL) {
    return;
  }

  $destFile = strtolower("data/xml/$group/$filename.xml");
  $bulletmlElem = $doc->getElementsByTagName('bulletml')->item(0);
  if ($bulletmlElem == NULL) {
    return;
  }

  if (! file_exists(dirname($destFile))) {
    mkdir(dirname($destFile));
  }

  $newXML = $doc->saveXML($bulletmlElem);
  file_put_contents($destFile, $newXML);
}

function doConv($dir) {
  foreach (glob("{$dir}/*") as $file) {
    if (is_file($file)) {
      if (preg_match('/\.bml$/', $file)) {
        print "$file\n";
        doCopy($file);
      }
    } else if (is_dir($file)) {
      doConv($file);
    }
  }
}

$targetDir = Common::getSrcFile();
doConv($targetDir);

?>
