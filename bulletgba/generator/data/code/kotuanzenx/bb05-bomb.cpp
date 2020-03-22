// XXX uniqID XXX be8de7ebfa5573937b659bbc90286ed5 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "kotuanzenx/bb05-bomb.hpp" 

extern const BulletStepFunc bullet_1f5421b7c75f52d35e32fcf3909df0b8_be8de7ebfa5573937b659bbc90286ed5[] = { 
stepfunc_6a95a017bb93fdcc61db7ed766c03a49_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_c4274a193b8d6ee8245c0caf453943a6_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_c4274a193b8d6ee8245c0caf453943a6_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_c4274a193b8d6ee8245c0caf453943a6_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_c4274a193b8d6ee8245c0caf453943a6_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_ae9f735c6401a821cc04ce1cd68278bf_be8de7ebfa5573937b659bbc90286ed5,
NULL}; 
extern const BulletStepFunc bullet_1f6095f254cfbbbf96f9e0d39c119e5e_be8de7ebfa5573937b659bbc90286ed5[] = { 
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5,
stepfunc_ae9f735c6401a821cc04ce1cd68278bf_be8de7ebfa5573937b659bbc90286ed5,
NULL}; 
void stepfunc_073b77899dab750a0998006109ac1707_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (0.7+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_34a57131644014de26253ed0605a47cc_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (0.8+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_03e64317962da2a3bc51ba98074f7404_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (0.9+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_151960fb51da0f993361b4f600fa581d_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (1.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_6a95a017bb93fdcc61db7ed766c03a49_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_c4274a193b8d6ee8245c0caf453943a6_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(FixedPointNum::random()*360.0));  p->lastBulletSpeed = (1.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 17; ++i) { 
stepfunc_151960fb51da0f993361b4f600fa581d_be8de7ebfa5573937b659bbc90286ed5(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(30.0));  p->lastBulletSpeed = (0.9+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 17; ++i) { 
stepfunc_03e64317962da2a3bc51ba98074f7404_be8de7ebfa5573937b659bbc90286ed5(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(30.0));  p->lastBulletSpeed = (0.8+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 17; ++i) { 
stepfunc_34a57131644014de26253ed0605a47cc_be8de7ebfa5573937b659bbc90286ed5(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(30.0));  p->lastBulletSpeed = (0.7+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 17; ++i) { 
stepfunc_073b77899dab750a0998006109ac1707_be8de7ebfa5573937b659bbc90286ed5(p);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_ae9f735c6401a821cc04ce1cd68278bf_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_6acb231f4ff23b6bce3588088af81c68_be8de7ebfa5573937b659bbc90286ed5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(360.0*FixedPointNum::random()));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1f5421b7c75f52d35e32fcf3909df0b8_be8de7ebfa5573937b659bbc90286ed5); 
  }
}
}


BulletInfo *genBulletFunc_be8de7ebfa5573937b659bbc90286ed5(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_1f6095f254cfbbbf96f9e0d39c119e5e_be8de7ebfa5573937b659bbc90286ed5); 
  }
return bi;}


