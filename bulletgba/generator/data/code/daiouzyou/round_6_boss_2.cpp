// XXX uniqID XXX b26ebadaebd607f43b5d7cb9bf8a96f5 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "daiouzyou/round_6_boss_2.hpp" 

extern const BulletStepFunc bullet_cd8961e7d83a0b990306a27515358693_b26ebadaebd607f43b5d7cb9bf8a96f5[] = { 
stepfunc_6a44bb20f393a4c1d9283abe159a2ec3_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_d91fbeb3c9cbc08c4af678982ad3c426_b26ebadaebd607f43b5d7cb9bf8a96f5,
NULL}; 
extern const BulletStepFunc bullet_3e83a87883d96f6e6f46f5864b4bc926_b26ebadaebd607f43b5d7cb9bf8a96f5[] = { 
stepfunc_2e91540b81904a107b66c3e5f979813c_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_b26ebadaebd607f43b5d7cb9bf8a96f5,
NULL}; 
extern const BulletStepFunc bullet_dd28c9fbaa455bbd2ae4aa033a80f196_b26ebadaebd607f43b5d7cb9bf8a96f5[] = { 
stepfunc_5344d4d35d51e560c6ab9392650572e5_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_769bdefb02579aa79348dd03cdd26c8a_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_62b3d319a1eeb69b2f0d96412f8eb3e9_b26ebadaebd607f43b5d7cb9bf8a96f5,
stepfunc_72f044d58ccfb4d5b2b84dbe3f00df2f_b26ebadaebd607f43b5d7cb9bf8a96f5,
NULL}; 
void stepfunc_c7925c00af925695c9273556d2bf7ed4_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_16152aa766944a2b259efd2ab76637ce_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-30.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.4);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 4; ++i) { 
stepfunc_c7925c00af925695c9273556d2bf7ed4_b26ebadaebd607f43b5d7cb9bf8a96f5(p);}
p->wait = static_cast<u16>(4.0); 
}
void stepfunc_2e91540b81904a107b66c3e5f979813c_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-30.0));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 4; ++i) { 
stepfunc_c7925c00af925695c9273556d2bf7ed4_b26ebadaebd607f43b5d7cb9bf8a96f5(p);}
p->wait = static_cast<u16>(4.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_6a44bb20f393a4c1d9283abe159a2ec3_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
p->wait = static_cast<u16>(1.0); 
}
void stepfunc_d91fbeb3c9cbc08c4af678982ad3c426_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3e83a87883d96f6e6f46f5864b4bc926_b26ebadaebd607f43b5d7cb9bf8a96f5); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_f46c86bb8f4d5378ece14bfe91d083be_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (24.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_cd8961e7d83a0b990306a27515358693_b26ebadaebd607f43b5d7cb9bf8a96f5); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(270.0));  p->lastBulletSpeed = (24.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_cd8961e7d83a0b990306a27515358693_b26ebadaebd607f43b5d7cb9bf8a96f5); 
  }
}
p->wait = static_cast<u16>(80.0); 
}
void stepfunc_5344d4d35d51e560c6ab9392650572e5_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 4.0 - p->getSpeed();p->setAccel(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = (FixedPointNum::degree2angle(180.0)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_769bdefb02579aa79348dd03cdd26c8a_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_62b3d319a1eeb69b2f0d96412f8eb3e9_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 4.0 - p->getSpeed();p->setAccel(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = (FixedPointNum::degree2angle(0.0)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_72f044d58ccfb4d5b2b84dbe3f00df2f_b26ebadaebd607f43b5d7cb9bf8a96f5(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_b26ebadaebd607f43b5d7cb9bf8a96f5(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_dd28c9fbaa455bbd2ae4aa033a80f196_b26ebadaebd607f43b5d7cb9bf8a96f5); 
  }
return bi;}


