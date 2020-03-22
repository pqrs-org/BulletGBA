#ifndef BARRAGEINFO_HPP
#define BARRAGEINFO_HPP

#include "bullet.hpp"

enum ActionType {
  ACTIONTYPE_WAIT,
  ACTIONTYPE_BULLET_NORMAL,

  END_OF_ACTIONTYPE,
};

struct BarrageInfo {
  int x;
  int y;
  BulletGenerateFunc func;

  ActionType type;
  int num; // variable for type.
};

#endif
