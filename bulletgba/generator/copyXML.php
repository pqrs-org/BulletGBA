#!/usr/bin/env php 
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/php/libcommon.php', dirname(__FILE__));

function doCopy($srcFile) {
  $group = NULL;
  $name = NULL;

  if (preg_match('/\[(.+?)\]_(.+)/', $srcFile, $matches)) {
    $group = $matches[1];
    $name = $matches[2];
  } else {
    $group = basename(dirname($srcFile));
    $name = basename($srcFile);
  }

  $destFile = strtolower("data/xml/$group/$name");
  if (! file_exists(dirname($destFile))) {
    @mkdir(dirname($destFile), 0700, true);
  }

  copy($srcFile, $destFile);
}

function doConv($dir) {
  foreach (glob("{$dir}/*") as $file) {
    if (is_file($file)) {
      if (preg_match('/\.xml$/', $file)) {
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
