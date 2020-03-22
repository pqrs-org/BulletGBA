<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L2 {

  function getList1() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/mebius-bom.cpp');
    $list[] = 600;
    $list[] = array(200, 80 - 4, '__system/mebius-bom.cpp');
    $list[] = 600;

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(200, 80 - 28, '__system/round-laser-leftside.cpp');
    $list[] = array(200, 80 + 20, '__system/round-laser-rightside.cpp');
    $list[] = 60;
    $list[] = array(180, 80 - 38, '__system/round-laser-leftside.cpp');
    $list[] = array(180, 80 + 30, '__system/round-laser-rightside.cpp');
    $list[] = 60;
    $list[] = array(160, 80 - 48, '__system/round-laser-leftside.cpp');
    $list[] = array(160, 80 + 40, '__system/round-laser-rightside.cpp');
    $list[] = 60;
    $list[] = array(140, 80 - 58, '__system/round-laser-leftside.cpp');
    $list[] = array(140, 80 + 50, '__system/round-laser-rightside.cpp');
    $list[] = 60;

    return $list;
  }

  function getList3() {
    $list = array();

    $list[] = array(180, 80 - 4, '__system/set-cross.cpp');
    $list[] = 1200;

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/hard-rand-direction-laser.cpp');
    $list[] = 900;

    $list[] = array(200, 80 - 4, '__system/spread-bom.cpp');
    $list[] = 300;

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(140, 80 - 4, '__system/rand-direction-laser.cpp');
    $list[] = array(200, 80 - 4, '__system/easy-round-downline.cpp');
    $list[] = 800;

    return $list;
  }

  function getList6() {
    $list = array();

    $list[] = array(180, 80 - 48, '__system/easy-round-spear.cpp');
    $list[] = array(180, 80 + 40, '__system/easy-round-spear.cpp');
    $list[] = 400;

    return $list;
  }

  function getList7() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/easy-homing-vulcan.cpp');
    $list[] = 1200;
    $list[] = array(200, 80 - 4, '__system/downline-rapidlaser.cpp');
    $list[] = 400;

    return $list;
  }

  function getList8() {
    $list = array();

    $list[] = array(220, 80 - 4, '__system/horizontal-line.cpp');
    $list[] = 600;

    return $list;
  }
}
