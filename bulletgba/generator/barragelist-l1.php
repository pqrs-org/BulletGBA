<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

;

class BarrageList_L1 {
  function getList1() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/easy-aim-line.cpp');
    $list[] = 600;

    return $list;
  }

  function getList2() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/rand-direction-laser.cpp');
    $list[] = 400;

    $list[] = array(200, 80 - 4, '__system/rand-direction-laser.cpp');
    $list[] = array(200, 80 - 48, '__system/round-laser-leftside.cpp');
    $list[] = array(200, 80 + 40, '__system/round-laser-rightside.cpp');
    $list[] = 500;

    return $list;
  }

  function getList3() {
    $list = array();

    $list[] = array(180, 80 - 4, '__system/easy-round-spear.cpp');
    $list[] = 400;

    return $list;
  }

  function getList4() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/3way-laser.cpp');
    $list[] = 200;

    $list[] = array(200, 80 - 48, '__system/3way-laser.cpp');
    $list[] = array(200, 80 + 40, '__system/3way-laser.cpp');
    $list[] = 200;

    return $list;
  }

  function getList5() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/easy-circle-homing.cpp');
    $list[] = 600;
    $list[] = array(200, 80 - 4, '__system/circle-spear.cpp');
    $list[] = 300;

    return $list;
  }

  function getList6() {
    $list[] = array(200, 80 - 4, '__system/semirand-5way.cpp');
    $list[] = 400;

    return $list;
  }

  function getList7() {
    $list = array();

    $list[] = array(200, 80 - 4, '__system/easy-round-line.cpp');
    $list[] = 500;

    return $list;
  }

  function getList8() {
    $list = array();
    $list[] = array(180, 80 - 4, '__system/lance.cpp');
    $list[] = 1100;

    return $list;
  }
}
