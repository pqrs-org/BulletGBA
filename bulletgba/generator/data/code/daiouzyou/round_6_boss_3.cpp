// XXX uniqID XXX 85e085ed40538c9632f3921749ee1bba XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "daiouzyou/round_6_boss_3.hpp" 

extern const BulletStepFunc bullet_fbc9d6baacc4d6134693ab767e7ed1c1_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_6a44bb20f393a4c1d9283abe159a2ec3_85e085ed40538c9632f3921749ee1bba,
stepfunc_60771dc749ebb4f7dc086d5adb09b361_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_e355c74bca0589cbd221c6a5f7b6eb25_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_6a44bb20f393a4c1d9283abe159a2ec3_85e085ed40538c9632f3921749ee1bba,
stepfunc_fb88bb055b4da019948fa17a09d682e7_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_a92b630fd3f456ed127758ff10d69d5a_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_f565b5a06ab07b7ae181568fe1bf7685_85e085ed40538c9632f3921749ee1bba,
stepfunc_71e12d95df9e455f597ca5423f913537_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_436f5eb5766b9e9aa6e209e362fc2f76_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_b076e970b9d968bf8403101f9ab0ff85_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_c9db08ef9c5fa68307da0f457845e628_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_a7f30a13b0357fdee72326c929cc8c00_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_e3d9d9fb08440f6ddc1d2ec69c5ca1f0_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_718b4d288eb958ec0c3ec48f116568d2_85e085ed40538c9632f3921749ee1bba,
NULL}; 
extern const BulletStepFunc bullet_27483f0358bbc860cb2fc1e5e15aeaa2_85e085ed40538c9632f3921749ee1bba[] = { 
stepfunc_bfefa171a39304786a1b58795d12bbb7_85e085ed40538c9632f3921749ee1bba,
stepfunc_16c4dfa6bbf58aae468f03fddf350764_85e085ed40538c9632f3921749ee1bba,
stepfunc_bfefa171a39304786a1b58795d12bbb7_85e085ed40538c9632f3921749ee1bba,
stepfunc_16c4dfa6bbf58aae468f03fddf350764_85e085ed40538c9632f3921749ee1bba,
stepfunc_bfefa171a39304786a1b58795d12bbb7_85e085ed40538c9632f3921749ee1bba,
stepfunc_16c4dfa6bbf58aae468f03fddf350764_85e085ed40538c9632f3921749ee1bba,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_85e085ed40538c9632f3921749ee1bba,
NULL}; 
void stepfunc_be4912132ff37c98e078e8e4dd0eab20_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/(10.0+1.0*10.0)));  p->lastBulletSpeed = ((1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b076e970b9d968bf8403101f9ab0ff85_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((14.0)));  p->lastBulletSpeed = ((1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_be4912132ff37c98e078e8e4dd0eab20_85e085ed40538c9632f3921749ee1bba(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_df6e3819540c5b7e3d991645a138c5f4_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/(10.0+1.0*10.0)));  p->lastBulletSpeed = ((1.25));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_a7f30a13b0357fdee72326c929cc8c00_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((7.0)));  p->lastBulletSpeed = ((1.25));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_df6e3819540c5b7e3d991645a138c5f4_85e085ed40538c9632f3921749ee1bba(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_85cac9877892248f18e8465f94ad47cf_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/(10.0+1.0*10.0)));  p->lastBulletSpeed = ((1.5));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_718b4d288eb958ec0c3ec48f116568d2_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((0.0)));  p->lastBulletSpeed = ((1.5));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_85cac9877892248f18e8465f94ad47cf_85e085ed40538c9632f3921749ee1bba(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_f565b5a06ab07b7ae181568fe1bf7685_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(50.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(45.0); 
}
void stepfunc_71e12d95df9e455f597ca5423f913537_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e3d9d9fb08440f6ddc1d2ec69c5ca1f0_85e085ed40538c9632f3921749ee1bba); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_c9db08ef9c5fa68307da0f457845e628_85e085ed40538c9632f3921749ee1bba); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_436f5eb5766b9e9aa6e209e362fc2f76_85e085ed40538c9632f3921749ee1bba); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_6a44bb20f393a4c1d9283abe159a2ec3_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
p->wait = static_cast<u16>(1.0); 
}
void stepfunc_60771dc749ebb4f7dc086d5adb09b361_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a92b630fd3f456ed127758ff10d69d5a_85e085ed40538c9632f3921749ee1bba); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle((25.0)));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a92b630fd3f456ed127758ff10d69d5a_85e085ed40538c9632f3921749ee1bba); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_fb88bb055b4da019948fa17a09d682e7_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a92b630fd3f456ed127758ff10d69d5a_85e085ed40538c9632f3921749ee1bba); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle((-25.0)));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a92b630fd3f456ed127758ff10d69d5a_85e085ed40538c9632f3921749ee1bba); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_bfefa171a39304786a1b58795d12bbb7_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(270.0));  p->lastBulletSpeed = (24.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e355c74bca0589cbd221c6a5f7b6eb25_85e085ed40538c9632f3921749ee1bba); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_16c4dfa6bbf58aae468f03fddf350764_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (24.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_fbc9d6baacc4d6134693ab767e7ed1c1_85e085ed40538c9632f3921749ee1bba); 
  }
}
p->wait = static_cast<u16>(100.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_85e085ed40538c9632f3921749ee1bba(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_85e085ed40538c9632f3921749ee1bba(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_27483f0358bbc860cb2fc1e5e15aeaa2_85e085ed40538c9632f3921749ee1bba); 
  }
return bi;}


