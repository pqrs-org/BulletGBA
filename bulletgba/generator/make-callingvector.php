#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

print "#include \"bullet.hpp\"\n\n";

$listBulletStepFunc = array();

$fileList = glob('data/code/*/*.hpp');

foreach ($fileList as $file) {
  $barrageGroup = basename(dirname($file));
  $barrageName = basename($file);
  print "#include \"{$barrageGroup}/{$barrageName}\" \n";
}

$listStepFuncVector = array();
foreach ($fileList as $file) {
  $fp = fopen($file, "r");
  while (! feof($fp)) {
    $line = trim(fgets($fp));
    if (preg_match('/extern const BulletStepFunc (bullet_.+)\[\]/', $line, $matches)) {
      $listStepFuncVector[] = $matches[1];
    }
  }
  fclose($fp);
}
print "extern const BulletStepFunc * const callingvectorList[] = { \n";
foreach ($listStepFuncVector as $item) {
  print "$item, \n";
}
print "};\n\n";

print "extern const unsigned int callingvectorListSize = sizeof(callingvectorList) / sizeof(callingvectorList[0]); \n\n";

print "extern const unsigned int callingvectorSizeList[] = { \n";
foreach ($listStepFuncVector as $item) {
  print "{$item}_size, \n";
}
print "};\n\n";

?>
