// XXX uniqID XXX 21f80fcb428125508037cdf700ebb7a0 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "noiz2sa/88way.hpp" 

extern const BulletStepFunc bullet_9ec5548a79e6e48e48661192ef529259_21f80fcb428125508037cdf700ebb7a0[] = { 
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_21f80fcb428125508037cdf700ebb7a0,
NULL}; 
extern const BulletStepFunc bullet_b3a240e1d9ed7fb63a42c381234ba610_21f80fcb428125508037cdf700ebb7a0[] = { 
stepfunc_213647bb47c96da9c44d2594b7971f0a_21f80fcb428125508037cdf700ebb7a0,
stepfunc_73190d61c799bc66159e300201bcb165_21f80fcb428125508037cdf700ebb7a0,
NULL}; 
extern const BulletStepFunc bullet_ab37aa43f4fb46e1cf540560a7dbe971_21f80fcb428125508037cdf700ebb7a0[] = { 
stepfunc_5db584028ca3e898089ec25336173f6d_21f80fcb428125508037cdf700ebb7a0,
NULL}; 
void stepfunc_25eb100349824d10b3d724dafd6b7c55_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(22.5));  p->lastBulletSpeed = (1.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_213647bb47c96da9c44d2594b7971f0a_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
p->wait = (20.0+FixedPointNum::random()*40.0).toInt(); 
}
void stepfunc_73190d61c799bc66159e300201bcb165_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
for (u32 i = 0; i < 16; ++i) { 
stepfunc_25eb100349824d10b3d724dafd6b7c55_21f80fcb428125508037cdf700ebb7a0(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_b74f18d2209882ac24db263139261dde_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/(6.0+1.0*10.0)));  p->lastBulletSpeed = (FixedPointNum::random()+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b3a240e1d9ed7fb63a42c381234ba610_21f80fcb428125508037cdf700ebb7a0); 
  }
}
p->wait = static_cast<u16>(100.0/(6.0+1.0*10.0)); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_5db584028ca3e898089ec25336173f6d_21f80fcb428125508037cdf700ebb7a0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9ec5548a79e6e48e48661192ef529259_21f80fcb428125508037cdf700ebb7a0); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_21f80fcb428125508037cdf700ebb7a0(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ab37aa43f4fb46e1cf540560a7dbe971_21f80fcb428125508037cdf700ebb7a0); 
  }
return bi;}


