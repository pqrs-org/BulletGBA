<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L4 {

  function getList1() {
    $list = array();

    $list[] = array(200, 80 - 48, '__system/3way-laser.cpp');
    $list[] = array(200, 80 + 40, '__system/3way-laser.cpp');
    $list[] = 300;
    $list[] = array(200, 80 - 4, '__system/3way-laser.cpp');
    $list[] = array(160, 80 - 48, '__system/4way-laser.cpp');
    $list[] = array(160, 80 + 40, '__system/4way-laser.cpp');
    $list[] = 300;

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/bow-pepper.cpp');
    $list[] = 200;

    return $list;
  }

  function getList3() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/screw-cross.cpp');
    $list[] = 700;

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/3way-laser-with-backfire.cpp');
    $list[] = 600;

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(180, 80 - 4, '__system/5x5wide.cpp');
    $list[] = 200;
    $list[] = array(180, 80 - 4, '__system/5x5wide.cpp');
    $list[] = 200;
    $list[] = array(180, 80 - 4, '__system/5x5wide.cpp');
    $list[] = 200;
    $list[] = array(180, 80 - 4, '__system/5x5wide.cpp');
    $list[] = 200;
    $list[] = array(220, 80 - 4, '__system/4way-spear.cpp');
    $list[] = 240;
    $list[] = array(220, 80 - 4, '__system/4way-spear.cpp');
    $list[] = 240;

    return $list;
  }

  function getList6() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/cycle-vulcan.cpp');
    $list[] = 700;

    return $list;
  }

  function getList7() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/hard-set-cross.cpp');
    $list[] = 1400;

    return $list;
  }

  function getList8() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/mebius-spear.cpp');
    $list[] = 2000;

    return $list;
  }
}
