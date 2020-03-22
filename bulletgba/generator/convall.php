#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/php/libcommon.php', dirname(__FILE__));
require_once sprintf('%s/php/gen-callingvector.php', dirname(__FILE__));

$targetDir = $_SERVER['argv'][1];

function cutComment($srcFile) {
  $destFile = Common::getTmpFile("00-cutcomment", $srcFile);
  if (Common::isSrcFileNew($srcFile, $destFile)) {
    print "cutComment {$srcFile}\n";
    system("php/cutcomment.php {$srcFile} {$destFile}");

    // ----------------------------------------
    $srcFile = $destFile;
    $destFile = Common::getTmpFile("01-rr", $srcFile);
    print "replaceReference {$srcFile}\n";
    system("php/replace-reference.php {$srcFile} {$destFile}");

    // ----------------------------------------
    $srcFile = $destFile;
    $destFile = Common::getTmpFile("02-cleanup", $srcFile);
    print "cleanup {$srcFile}\n";
    system("php/cleanup.php {$srcFile} {$destFile}");

    // ----------------------------------------
    $srcFile = $destFile;
    $destFile = Common::getTmpFile("03-makestepfunc", $srcFile);
    print "make-stepfunc {$srcFile}\n";
    system("php/make-stepfunc.php {$srcFile} {$destFile}");

    // ----------------------------------------
    $srcFile = $destFile;
    $destFile = Common::getTmpFile("04-splitbullet", $srcFile);
    print "splitbullet {$srcFile}\n";
    system("php/splitbullet.php {$srcFile} {$destFile}");

    // ----------------------------------------
    $srcFile = $destFile;
    print "generateCode {$srcFile}\n";
    system("php/gen-callingvector.php {$srcFile}", $retval);
    if ($retval == 0) {
      $destFile = Common::getCodeFile($srcFile);
      system("php/gen-code.php {$srcFile} > {$destFile}", $retval);
      if ($retval == 1) {
        unlink($destFile);
      } else {
        $filename = GenCallingVector::getCPPHPPFileName($srcFile);
        $hppFile = sprintf('%s/%s.hpp', dirname($destFile), basename($destFile, '.cpp'));
        copy($filename['hpp'], $hppFile);
      }
    }
  }
}

function doConv($dir) {
  foreach (glob("{$dir}/*") as $file) {
    if (is_file($file)) {
      if (preg_match('/\.xml$/', $file)) {
        cutComment($file);
      }
    } else if (is_dir($file)) {
      doConv($file);
    }
  }
}

doConv($targetDir);

?>
