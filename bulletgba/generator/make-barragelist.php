#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

require_once 'barragelist-l1.php';
require_once 'barragelist-l2.php';
require_once 'barragelist-l3.php';
require_once 'barragelist-l4.php';

print "#ifndef BARRAGELIST_HPP\n";
print "#define BARRAGELIST_HPP\n";
print "#include \"bullet.hpp\"\n\n";

$listBulletStepFunc = array();

// ============================================================
$GLOBALS['listName'] = array();
outputSubList(BarrageList_L1::getList1(), "listBarrage_L1_1");
outputSubList(BarrageList_L1::getList2(), "listBarrage_L1_2");
outputSubList(BarrageList_L1::getList3(), "listBarrage_L1_3");
outputSubList(BarrageList_L1::getList4(), "listBarrage_L1_4");
outputSubList(BarrageList_L1::getList5(), "listBarrage_L1_5");
outputSubList(BarrageList_L1::getList6(), "listBarrage_L1_6");
outputSubList(BarrageList_L1::getList7(), "listBarrage_L1_7");
outputSubList(BarrageList_L1::getList8(), "listBarrage_L1_8");
outputList('listBarrage_L1_all');

$GLOBALS['listName'] = array();
outputSubList(BarrageList_L2::getList1(), "listBarrage_L2_1");
outputSubList(BarrageList_L2::getList2(), "listBarrage_L2_2");
outputSubList(BarrageList_L2::getList3(), "listBarrage_L2_3");
outputSubList(BarrageList_L2::getList4(), "listBarrage_L2_4");
outputSubList(BarrageList_L2::getList5(), "listBarrage_L2_5");
outputSubList(BarrageList_L2::getList6(), "listBarrage_L2_6");
outputSubList(BarrageList_L2::getList7(), "listBarrage_L2_7");
outputSubList(BarrageList_L2::getList8(), "listBarrage_L2_8");
outputList('listBarrage_L2_all');

$GLOBALS['listName'] = array();
outputSubList(BarrageList_L3::getList1(), "listBarrage_L3_1");
outputSubList(BarrageList_L3::getList2(), "listBarrage_L3_2");
outputSubList(BarrageList_L3::getList3(), "listBarrage_L3_3");
outputSubList(BarrageList_L3::getList4(), "listBarrage_L3_4");
outputSubList(BarrageList_L3::getList5(), "listBarrage_L3_5");
outputSubList(BarrageList_L3::getList6(), "listBarrage_L3_6");
outputSubList(BarrageList_L3::getList7(), "listBarrage_L3_7");
outputSubList(BarrageList_L3::getList8(), "listBarrage_L3_8");
outputList('listBarrage_L3_all');

$GLOBALS['listName'] = array();
outputSubList(BarrageList_L4::getList2(), "listBarrage_L4_2");
outputSubList(BarrageList_L4::getList1(), "listBarrage_L4_1");
outputSubList(BarrageList_L4::getList3(), "listBarrage_L4_3");
outputSubList(BarrageList_L4::getList4(), "listBarrage_L4_4");
outputSubList(BarrageList_L4::getList5(), "listBarrage_L4_5");
outputSubList(BarrageList_L4::getList6(), "listBarrage_L4_6");
outputSubList(BarrageList_L4::getList7(), "listBarrage_L4_7");
outputSubList(BarrageList_L4::getList8(), "listBarrage_L4_8");
outputList('listBarrage_L4_all');

function getUniqID($filename) {
  if (! file_exists($filename)) {
    error_log("[ERROR] $filename is not exist!");
    exit(1);
  }

  $f = fopen($filename, 'r');
  $string = fgets($f);

  $uniqID = NULL;
  if (preg_match('/XXX uniqID XXX (.+) XXX/', $string, $matches)) {
    $uniqID = $matches[1];
  }

  fclose($f);
  return $uniqID;
}

function outputSubList($list, $name) {
  $GLOBALS['listName'][] = $name;

  foreach ($list as $key => $struct) {
    if (is_array($struct)) {
      $filename = $struct[2];
      if ($filename) {
        $uniqID = getUniqID("data/code/${filename}");
        if ($uniqID == NULL) {
          error_log("$$$ [ERROR] ($filename is not found) $$$");
        }
        $list[$key]['uniqID'] = $uniqID;
        print "BulletInfo *genBulletFunc_{$uniqID}(FixedPointNum posx, FixedPointNum posy);\n";
      }
    }
  }

  print "const BarrageInfo {$name}[] = { \n";
  foreach ($list as $struct) {
    if (is_array($struct)) {
      if (preg_match("/^ACTIONTYPE_/", $struct[0])) {
        //print "S{$struct[0]}S";

        print "{ 0, 0, NULL, {$struct[0]}, {$struct[1]} }, \n";

      } else {
        $x = intval($struct[0]);
        $y = intval($struct[1]);
        $uniqID = $struct['uniqID'];

        print "{ {$x}, {$y}, genBulletFunc_{$uniqID}, ACTIONTYPE_BULLET_NORMAL, 0 }, \n";
      }
    } else {
      if (preg_match("/^ACTIONTYPE_/", $struct)) {
        print "{ 0, 0, NULL, {$struct}, 0 }, \n";
      } else {
        print "{ 0, 0, NULL, ACTIONTYPE_WAIT, {$struct} }, \n";
      }
    }
  }
  print "{ 0, 0, NULL, END_OF_ACTIONTYPE, 0 }, }; \n\n";
}

function outputList($name) {
  print "const BarrageInfo * const {$name}[] = { \n";
  foreach ($GLOBALS['listName'] as $n) {
    print "  $n, ";
  }
  print "NULL, }; \n\n";
}

print "#endif\n";

?>
