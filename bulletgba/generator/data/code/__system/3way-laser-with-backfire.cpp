// XXX uniqID XXX cd2be8d5d76ee6813edc1f603c6683f0 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/3way-laser-with-backfire.hpp" 

extern const BulletStepFunc bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0[] = { 
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_cd2be8d5d76ee6813edc1f603c6683f0,
NULL}; 
extern const BulletStepFunc bullet_b226980131849b836c645fb09752e98e_cd2be8d5d76ee6813edc1f603c6683f0[] = { 
stepfunc_c172a15bb6eca889f748350b364028cc_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_fb1977d74cf5deba683329a979eaf211_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_c172a15bb6eca889f748350b364028cc_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_fb1977d74cf5deba683329a979eaf211_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_c172a15bb6eca889f748350b364028cc_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_fb1977d74cf5deba683329a979eaf211_cd2be8d5d76ee6813edc1f603c6683f0,
NULL}; 
extern const BulletStepFunc bullet_696fb51771a0211e12833995b0592f30_cd2be8d5d76ee6813edc1f603c6683f0[] = { 
stepfunc_8fff89501dcb48caade16bb16deb7b61_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_d066bdbb488f43052fd49dea283086db_cd2be8d5d76ee6813edc1f603c6683f0,
NULL}; 
extern const BulletStepFunc bullet_94d9338f4f0522781f381ce8b905d219_cd2be8d5d76ee6813edc1f603c6683f0[] = { 
stepfunc_f6dc696183458392df621494ba4d8f6f_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_ac512994d2b2d397ebe70ebdddde9d50_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_f6dc696183458392df621494ba4d8f6f_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_17753ee24c04a3b7f97d769f1e962872_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_1adae737277ef32f83122364803480e1_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_6358ef8f329a12d67a5eaecb91751eb6_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_3bd28f206c10beca58a79aa9ea3bd16a_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_6d2d3d5165309614b39be23702462b82_cd2be8d5d76ee6813edc1f603c6683f0,
stepfunc_1bdf915efb56bdf6be07157176a4d506_cd2be8d5d76ee6813edc1f603c6683f0,
NULL}; 
void stepfunc_8fff89501dcb48caade16bb16deb7b61_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_d066bdbb488f43052fd49dea283086db_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+10.0-20.0*FixedPointNum::random())) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(30.0);  FixedPointNum speed = 0.1;p->setAccel(speed, life);}
}
void stepfunc_c172a15bb6eca889f748350b364028cc_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_fb1977d74cf5deba683329a979eaf211_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0-30.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_696fb51771a0211e12833995b0592f30_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0+30.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_696fb51771a0211e12833995b0592f30_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
}
void stepfunc_0bc7b69da5b75223c63078cc18ca8b26_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b226980131849b836c645fb09752e98e_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(3.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_f6dc696183458392df621494ba4d8f6f_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(90.0); 
}
void stepfunc_ac512994d2b2d397ebe70ebdddde9d50_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(90.0); 
}
void stepfunc_17753ee24c04a3b7f97d769f1e962872_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(90.0); 
}
void stepfunc_1adae737277ef32f83122364803480e1_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(-60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_6358ef8f329a12d67a5eaecb91751eb6_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(-30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_3bd28f206c10beca58a79aa9ea3bd16a_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(0.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_6d2d3d5165309614b39be23702462b82_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(30.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_1bdf915efb56bdf6be07157176a4d506_cd2be8d5d76ee6813edc1f603c6683f0(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0+(60.0)));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ffff0da10faa5fca0d9e977247bcd70d_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_cd2be8d5d76ee6813edc1f603c6683f0(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_94d9338f4f0522781f381ce8b905d219_cd2be8d5d76ee6813edc1f603c6683f0); 
  }
return bi;}


