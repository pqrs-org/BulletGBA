// XXX uniqID XXX 9b958f380c772f3c2629fd1009c26efa XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "esp_rade/round_5_boss_kakusi_hakkyou.hpp" 

extern const BulletStepFunc bullet_67d8e682c7b5474b320738c2fd64abb6_9b958f380c772f3c2629fd1009c26efa[] = { 
stepfunc_537d74a50aa0fe92205c760565ef3180_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_9b958f380c772f3c2629fd1009c26efa,
NULL}; 
extern const BulletStepFunc bullet_16d55bc78964a0ba886a041999dd9884_9b958f380c772f3c2629fd1009c26efa[] = { 
stepfunc_177f380cbfd5bdc1fa410372284211b3_9b958f380c772f3c2629fd1009c26efa,
stepfunc_df6df452ca520546f728eea1d4f4f1d9_9b958f380c772f3c2629fd1009c26efa,
stepfunc_df6df452ca520546f728eea1d4f4f1d9_9b958f380c772f3c2629fd1009c26efa,
stepfunc_df6df452ca520546f728eea1d4f4f1d9_9b958f380c772f3c2629fd1009c26efa,
NULL}; 
extern const BulletStepFunc bullet_74d7ff417189eef0fb06d96b65406796_9b958f380c772f3c2629fd1009c26efa[] = { 
stepfunc_e2f666688790ba6ad48c06c9c88121cf_9b958f380c772f3c2629fd1009c26efa,
NULL}; 
void stepfunc_732523da8530f2e355e895effb3d15fe_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(15.0+30.0*FixedPointNum::random()));  p->lastBulletSpeed = (0.8+1.0+FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_d9d705592913553e723b653a9e67bb54_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-45.0+30.0*FixedPointNum::random()));  p->lastBulletSpeed = (0.8+1.0+FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_e5d3ae1029ab8339b767843ab1067784_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-15.0+30.0*FixedPointNum::random()));  p->lastBulletSpeed = (0.8+1.0+FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_177f380cbfd5bdc1fa410372284211b3_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
p->wait = static_cast<u16>(3.0); 
}
void stepfunc_df6df452ca520546f728eea1d4f4f1d9_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
for (u32 i = 0; i < 2; ++i) { 
stepfunc_e5d3ae1029ab8339b767843ab1067784_9b958f380c772f3c2629fd1009c26efa(p);}
for (u32 i = 0; i < 2; ++i) { 
stepfunc_d9d705592913553e723b653a9e67bb54_9b958f380c772f3c2629fd1009c26efa(p);}
for (u32 i = 0; i < 2; ++i) { 
stepfunc_732523da8530f2e355e895effb3d15fe_9b958f380c772f3c2629fd1009c26efa(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_e0f1f494526f383ca84e1cdaf4f80070_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_16d55bc78964a0ba886a041999dd9884_9b958f380c772f3c2629fd1009c26efa); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-90.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_16d55bc78964a0ba886a041999dd9884_9b958f380c772f3c2629fd1009c26efa); 
  }
}
p->wait = static_cast<u16>(200.0/(4.0+1.0*6.0)); 
}
void stepfunc_537d74a50aa0fe92205c760565ef3180_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_e2f666688790ba6ad48c06c9c88121cf_9b958f380c772f3c2629fd1009c26efa(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (6.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_67d8e682c7b5474b320738c2fd64abb6_9b958f380c772f3c2629fd1009c26efa); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(270.0));  p->lastBulletSpeed = (6.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_67d8e682c7b5474b320738c2fd64abb6_9b958f380c772f3c2629fd1009c26efa); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_9b958f380c772f3c2629fd1009c26efa(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_74d7ff417189eef0fb06d96b65406796_9b958f380c772f3c2629fd1009c26efa); 
  }
return bi;}


