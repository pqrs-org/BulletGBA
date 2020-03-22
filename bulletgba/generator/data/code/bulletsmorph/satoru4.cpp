// XXX uniqID XXX 0765916f0e2eb0a5d0fe79981a0eb99e XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "bulletsmorph/satoru4.hpp" 

extern const BulletStepFunc bullet_8b448f2d4fce7b0d12d5441051d9d61f_0765916f0e2eb0a5d0fe79981a0eb99e[] = { 
stepfunc_f00fffa12b711617cd9b2bb85afde0d8_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e,
NULL}; 
extern const BulletStepFunc bullet_0357f8038c47a8bc803837a013c3edd3_0765916f0e2eb0a5d0fe79981a0eb99e[] = { 
stepfunc_026255fdcaf6359e22c1f197742012d8_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_026255fdcaf6359e22c1f197742012d8_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_026255fdcaf6359e22c1f197742012d8_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_026255fdcaf6359e22c1f197742012d8_0765916f0e2eb0a5d0fe79981a0eb99e,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_0765916f0e2eb0a5d0fe79981a0eb99e,
NULL}; 
void stepfunc_dff38be12869bf7f89e8d1975be95607_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_ddceff6e8875b2d6930c1b2248eb9b15_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_c0b18a950b8379a2b2e773e35ad1187a_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_1ea34d73c8da187b4aac33fe4185a93b_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_7798e48dfa5b24e079b2cac00e8b9520_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_f00fffa12b711617cd9b2bb85afde0d8_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*360.0)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 2.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_e77c6c39e707e90095fab305a0305092_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_7798e48dfa5b24e079b2cac00e8b9520_0765916f0e2eb0a5d0fe79981a0eb99e(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_1ea34d73c8da187b4aac33fe4185a93b_0765916f0e2eb0a5d0fe79981a0eb99e(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_c0b18a950b8379a2b2e773e35ad1187a_0765916f0e2eb0a5d0fe79981a0eb99e(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_ddceff6e8875b2d6930c1b2248eb9b15_0765916f0e2eb0a5d0fe79981a0eb99e(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((1.0*3.0+FixedPointNum::random())))*FixedPointNum::random()*2.0-(((1.0*3.0+FixedPointNum::random())))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_dff38be12869bf7f89e8d1975be95607_0765916f0e2eb0a5d0fe79981a0eb99e(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
ListBullets::stepFuncDrop(p);}
void stepfunc_026255fdcaf6359e22c1f197742012d8_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*16.0-8.0));  p->lastBulletSpeed = (((0.0)+FixedPointNum::random()*(0.0))*(1.0/2.0+0.65));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_8b448f2d4fce7b0d12d5441051d9d61f_0765916f0e2eb0a5d0fe79981a0eb99e); 
  }
}
p->wait = static_cast<u16>(1.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_0765916f0e2eb0a5d0fe79981a0eb99e(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_0765916f0e2eb0a5d0fe79981a0eb99e(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_0357f8038c47a8bc803837a013c3edd3_0765916f0e2eb0a5d0fe79981a0eb99e); 
  }
return bi;}


