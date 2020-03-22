// XXX uniqID XXX 525eeec5d206b607aa7162121d984ed9 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/knight_4.hpp" 

extern const BulletStepFunc bullet_b77d85a22469c43df78c0ccb48b58ed4_525eeec5d206b607aa7162121d984ed9[] = { 
stepfunc_9c133fab9f6c50e8637456711cfc6df7_525eeec5d206b607aa7162121d984ed9,
stepfunc_43058fad852bf994a6bb72175b59df36_525eeec5d206b607aa7162121d984ed9,
stepfunc_41d516240f7c835df5c8edc827517410_525eeec5d206b607aa7162121d984ed9,
stepfunc_43058fad852bf994a6bb72175b59df36_525eeec5d206b607aa7162121d984ed9,
stepfunc_41d516240f7c835df5c8edc827517410_525eeec5d206b607aa7162121d984ed9,
stepfunc_43058fad852bf994a6bb72175b59df36_525eeec5d206b607aa7162121d984ed9,
stepfunc_41d516240f7c835df5c8edc827517410_525eeec5d206b607aa7162121d984ed9,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_525eeec5d206b607aa7162121d984ed9,
NULL}; 
extern const BulletStepFunc bullet_099cfedfd4763966e8fed8b37b2b6f7a_525eeec5d206b607aa7162121d984ed9[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_525eeec5d206b607aa7162121d984ed9,
stepfunc_5dae280ad8aa9479f3436a1db4ae00da_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_525eeec5d206b607aa7162121d984ed9,
NULL}; 
extern const BulletStepFunc bullet_c5af082d4ddc0301c3176cf5aa7878c2_525eeec5d206b607aa7162121d984ed9[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_525eeec5d206b607aa7162121d984ed9,
stepfunc_5dae280ad8aa9479f3436a1db4ae00da_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_525eeec5d206b607aa7162121d984ed9,
NULL}; 
extern const BulletStepFunc bullet_80e9f9b37f7b905cc7bbc2721552271c_525eeec5d206b607aa7162121d984ed9[] = { 
stepfunc_a1ff7c87ec86b955c4bee5ca062fdfa2_525eeec5d206b607aa7162121d984ed9,
NULL}; 
void stepfunc_8e619f89af0f112c2174c8c3f3911be9_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle((120.0)));  p->lastBulletSpeed = (((1.6)) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_19821f11904f21483bbc290f3f120b00_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_5dae280ad8aa9479f3436a1db4ae00da_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0001 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_95663f3346757d5b33df0c141119f436_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle((-120.0)));  p->lastBulletSpeed = (((1.6)) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_43058fad852bf994a6bb72175b59df36_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(60.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_c5af082d4ddc0301c3176cf5aa7878c2_525eeec5d206b607aa7162121d984ed9); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_41d516240f7c835df5c8edc827517410_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-60.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_099cfedfd4763966e8fed8b37b2b6f7a_525eeec5d206b607aa7162121d984ed9); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_9c133fab9f6c50e8637456711cfc6df7_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
p->wait = (20.0 + 10.0 * FixedPointNum::random()).toInt(); 
}
void stepfunc_a1ff7c87ec86b955c4bee5ca062fdfa2_525eeec5d206b607aa7162121d984ed9(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (1.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b77d85a22469c43df78c0ccb48b58ed4_525eeec5d206b607aa7162121d984ed9); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_525eeec5d206b607aa7162121d984ed9(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_80e9f9b37f7b905cc7bbc2721552271c_525eeec5d206b607aa7162121d984ed9); 
  }
return bi;}


