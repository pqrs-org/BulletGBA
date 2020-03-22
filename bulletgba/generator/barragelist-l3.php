<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L3 {

  function getList1() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/hard-homing-vulcan.cpp');
    $list[] = 500;

    $list[] = array(200, 80 - 4, '__system/sidewall-homing.cpp');
    $list[] = 300;

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/4way-laser.cpp');
    $list[] = 200;
    $list[] = array(200, 80 - 48, '__system/round-laser-leftside.cpp');
    $list[] = array(200, 80 + 40, '__system/round-laser-rightside.cpp');
    $list[] = 60;

    return $list;
  }

  function getList3() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/cycle.cpp');
    $list[] = 60;

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/4way-laser-with-backfire.cpp');
    $list[] = 500;

    $list[] = array(200, 80 - 4, '__system/punch.cpp');
    $list[] = 150;
    $list[] = array(200, 80 - 4, '__system/punch.cpp');
    $list[] = 180;

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(160, 80 - 4, '__system/circle-spread.cpp');
    $list[] = 200;

    return $list;
  }

  function getList6() {
    $list = array();

    $list[] = array(180, 80 - 4, '__system/cross-homing.cpp');
    $list[] = 700;

    return $list;
  }

  function getList7() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/screw.cpp');
    $list[] = 700;

    $list[] = array(200, 80 - 4, '__system/wide-changespeed.cpp');
    $list[] = 120;

    return $list;
  }

  function getList8() {
    $list = array();

    $list[] = array(220, 80 - 4, '__system/rand-spear.cpp');
    $list[] = 800;
    $list[] = array(220, 80 - 4, '__system/hard-wide-changespeed.cpp');
    $list[] = 200;

    return $list;
  }
}
