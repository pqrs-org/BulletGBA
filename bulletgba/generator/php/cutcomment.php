#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

function doConv() {
  $srcFile = Common::getSrcFile();
  $destFile = Common::getDestFile();

  $xmlbody = file_get_contents($srcFile);
  $xmlbody = str_replace("\t", '', $xmlbody);
  $xmlbody = preg_replace('/<!--.+?-->/', '', $xmlbody);

  file_put_contents($destFile, $xmlbody);
}

doConv();

?>
