// XXX uniqID XXX caf7460bfa652a55c9064d6c984ac6d6 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "esp_rade/round_5_boss_gara_4.hpp" 

extern const BulletStepFunc bullet_4b6fc3d0eeb9bc79004ddcae69ba24d7_caf7460bfa652a55c9064d6c984ac6d6[] = { 
stepfunc_8f67076238570ce89fac133b88df2340_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_f9d85798b08e390d907e370fa10df249_caf7460bfa652a55c9064d6c984ac6d6,
NULL}; 
extern const BulletStepFunc bullet_99f0022911cd6ea509d7932032979215_caf7460bfa652a55c9064d6c984ac6d6[] = { 
stepfunc_525dae98fc79d493d730dbbe806c6346_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_baa9f35b0a9de8c1a5af6946435e60bc_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_525dae98fc79d493d730dbbe806c6346_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_baa9f35b0a9de8c1a5af6946435e60bc_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_525dae98fc79d493d730dbbe806c6346_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_baa9f35b0a9de8c1a5af6946435e60bc_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_525dae98fc79d493d730dbbe806c6346_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_baa9f35b0a9de8c1a5af6946435e60bc_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_4353a7676635a508b7e4a5b8e0e9754f_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_51a08fe10557135cbe1367686f765ffb_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_0fb252db20add72dc85341e7701ae6a2_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_51a08fe10557135cbe1367686f765ffb_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_0fb252db20add72dc85341e7701ae6a2_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_51a08fe10557135cbe1367686f765ffb_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_0fb252db20add72dc85341e7701ae6a2_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_51a08fe10557135cbe1367686f765ffb_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_0fb252db20add72dc85341e7701ae6a2_caf7460bfa652a55c9064d6c984ac6d6,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_caf7460bfa652a55c9064d6c984ac6d6,
NULL}; 
void stepfunc_d15f6a365b684283efb4ec2d38d084f4_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(20.0*FixedPointNum::random()-10.0));  p->lastBulletSpeed = (2.0*FixedPointNum::random()+0.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_8f67076238570ce89fac133b88df2340_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(20.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_f9d85798b08e390d907e370fa10df249_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
for (u32 i = 0; i < 50; ++i) { 
stepfunc_d15f6a365b684283efb4ec2d38d084f4_caf7460bfa652a55c9064d6c984ac6d6(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_51a08fe10557135cbe1367686f765ffb_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (7.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4b6fc3d0eeb9bc79004ddcae69ba24d7_caf7460bfa652a55c9064d6c984ac6d6); 
  }
}
p->wait = static_cast<u16>(40.0-1.0*20.0); 
}
void stepfunc_0fb252db20add72dc85341e7701ae6a2_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(-90.0));  p->lastBulletSpeed = (7.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4b6fc3d0eeb9bc79004ddcae69ba24d7_caf7460bfa652a55c9064d6c984ac6d6); 
  }
}
p->wait = static_cast<u16>(40.0-1.0*20.0); 
}
void stepfunc_525dae98fc79d493d730dbbe806c6346_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (7.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4b6fc3d0eeb9bc79004ddcae69ba24d7_caf7460bfa652a55c9064d6c984ac6d6); 
  }
}
p->wait = static_cast<u16>(30.0+1.0*30.0); 
}
void stepfunc_baa9f35b0a9de8c1a5af6946435e60bc_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(-90.0));  p->lastBulletSpeed = (7.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4b6fc3d0eeb9bc79004ddcae69ba24d7_caf7460bfa652a55c9064d6c984ac6d6); 
  }
}
p->wait = static_cast<u16>(30.0+1.0*30.0); 
}
void stepfunc_4353a7676635a508b7e4a5b8e0e9754f_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
p->wait = static_cast<u16>(120.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_caf7460bfa652a55c9064d6c984ac6d6(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_caf7460bfa652a55c9064d6c984ac6d6(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_99f0022911cd6ea509d7932032979215_caf7460bfa652a55c9064d6c984ac6d6); 
  }
return bi;}


