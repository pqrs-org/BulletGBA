#include "bullet.hpp"
#include "stepfunc.hpp"
#include "gameengine.hpp"

const BulletStepFunc StepFunc::nullStepFuncList[] = {
  NULL,
  NULL,
};

const BulletStepFunc StepFunc::effectHitStepFuncList[] = {
  StepFunc::effectHit<ImageHandler::OBJTILE_BULLET_EXPLODE_PATTERN>,
  ListBullets::stepFuncDrop,
  NULL,
};
