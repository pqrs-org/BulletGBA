// XXX uniqID XXX 0f6d6de920e2adcdebe6aea9bf7059fc XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/5x5wide.hpp" 

extern const BulletStepFunc bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc[] = { 
stepfunc_b9f3746024faf71a948d02a3f58cba12_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_5da9a9bb21a67092cfb561a8bcb79897_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_ef8337677f9910aa554896ec6cb20849_0f6d6de920e2adcdebe6aea9bf7059fc,
NULL}; 
extern const BulletStepFunc bullet_08cab21cb2a7c5b2daaaeb938f9cf5df_0f6d6de920e2adcdebe6aea9bf7059fc[] = { 
stepfunc_d48d3ece6d0e52f7cb313fdb0549be4a_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_599e50a88588e3d544a6ebf6ac5a36e6_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_b1f762b5100e1c986d5c7a2919173970_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_599e50a88588e3d544a6ebf6ac5a36e6_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_d48d3ece6d0e52f7cb313fdb0549be4a_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_6400e70909abe7d9f4513cc40f7b88b1_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_e1f8972f8a89f66a93ce2ad9043f6c69_0f6d6de920e2adcdebe6aea9bf7059fc,
stepfunc_bf6f756f0b5b5af3e4fb4443b7996729_0f6d6de920e2adcdebe6aea9bf7059fc,
NULL}; 
void stepfunc_b9f3746024faf71a948d02a3f58cba12_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_5da9a9bb21a67092cfb561a8bcb79897_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.1 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_ef8337677f9910aa554896ec6cb20849_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(40.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-40.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_d48d3ece6d0e52f7cb313fdb0549be4a_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_599e50a88588e3d544a6ebf6ac5a36e6_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((5.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_b1f762b5100e1c986d5c7a2919173970_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((10.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_6400e70909abe7d9f4513cc40f7b88b1_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_e1f8972f8a89f66a93ce2ad9043f6c69_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-10.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_bf6f756f0b5b5af3e4fb4443b7996729_0f6d6de920e2adcdebe6aea9bf7059fc(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-20.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-40.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-60.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)+80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-5.0)-80.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_57a5b548010e7cdd8e39b1b10e8920c9_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_0f6d6de920e2adcdebe6aea9bf7059fc(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_08cab21cb2a7c5b2daaaeb938f9cf5df_0f6d6de920e2adcdebe6aea9bf7059fc); 
  }
return bi;}


