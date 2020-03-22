// XXX uniqID XXX 19a89be4d092fd55d6e188faa2c2e593 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/wide-changespeed.hpp" 

extern const BulletStepFunc bullet_0e384f4d59f156ff2dadd2675578e0a7_19a89be4d092fd55d6e188faa2c2e593[] = { 
stepfunc_1d9dbe5ae64aba25567a658407019522_19a89be4d092fd55d6e188faa2c2e593,
NULL}; 
extern const BulletStepFunc bullet_241069f28950cc72100533229d845a16_19a89be4d092fd55d6e188faa2c2e593[] = { 
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_19a89be4d092fd55d6e188faa2c2e593,
NULL}; 
void stepfunc_1d9dbe5ae64aba25567a658407019522_19a89be4d092fd55d6e188faa2c2e593(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = 0.2;p->setAccel(speed, life);}
}
void stepfunc_4613b13fa8da2e1ed4088bd89c01ee87_19a89be4d092fd55d6e188faa2c2e593(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e384f4d59f156ff2dadd2675578e0a7_19a89be4d092fd55d6e188faa2c2e593); 
  }
}
}
void stepfunc_e52d769de20c6b99dea6fc43ff230854_19a89be4d092fd55d6e188faa2c2e593(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(10.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e384f4d59f156ff2dadd2675578e0a7_19a89be4d092fd55d6e188faa2c2e593); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_4613b13fa8da2e1ed4088bd89c01ee87_19a89be4d092fd55d6e188faa2c2e593(p);}
}
void stepfunc_6fdba42d139f07ab886591dad5d21e2b_19a89be4d092fd55d6e188faa2c2e593(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-70.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e384f4d59f156ff2dadd2675578e0a7_19a89be4d092fd55d6e188faa2c2e593); 
  }
}
for (u32 i = 0; i < 5; ++i) { 
stepfunc_4613b13fa8da2e1ed4088bd89c01ee87_19a89be4d092fd55d6e188faa2c2e593(p);}
for (u32 i = 0; i < 14; ++i) { 
stepfunc_e52d769de20c6b99dea6fc43ff230854_19a89be4d092fd55d6e188faa2c2e593(p);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_19a89be4d092fd55d6e188faa2c2e593(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_19a89be4d092fd55d6e188faa2c2e593(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_241069f28950cc72100533229d845a16_19a89be4d092fd55d6e188faa2c2e593); 
  }
return bi;}


