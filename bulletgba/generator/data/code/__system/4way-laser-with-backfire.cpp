// XXX uniqID XXX 1782ece16e63c94248b34a9477f9a161 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/4way-laser-with-backfire.hpp" 

extern const BulletStepFunc bullet_f13328390ff7fa5b2d333e7d97622996_1782ece16e63c94248b34a9477f9a161[] = { 
stepfunc_92525806be8fc05532d30eeaaf032e00_1782ece16e63c94248b34a9477f9a161,
NULL}; 
extern const BulletStepFunc bullet_e4d24e4fd756a1be9966cf9cb35d7fa1_1782ece16e63c94248b34a9477f9a161[] = { 
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_1782ece16e63c94248b34a9477f9a161,
NULL}; 
extern const BulletStepFunc bullet_4de5e79cd4fab2ccf79a4839285fc8c0_1782ece16e63c94248b34a9477f9a161[] = { 
stepfunc_c172a15bb6eca889f748350b364028cc_1782ece16e63c94248b34a9477f9a161,
stepfunc_1b06bd7cd61093206f6e49c41b6259bf_1782ece16e63c94248b34a9477f9a161,
stepfunc_c172a15bb6eca889f748350b364028cc_1782ece16e63c94248b34a9477f9a161,
stepfunc_1b06bd7cd61093206f6e49c41b6259bf_1782ece16e63c94248b34a9477f9a161,
stepfunc_c172a15bb6eca889f748350b364028cc_1782ece16e63c94248b34a9477f9a161,
stepfunc_1b06bd7cd61093206f6e49c41b6259bf_1782ece16e63c94248b34a9477f9a161,
NULL}; 
extern const BulletStepFunc bullet_9c83a26f937f329ad371839d8e81cff9_1782ece16e63c94248b34a9477f9a161[] = { 
stepfunc_8fff89501dcb48caade16bb16deb7b61_1782ece16e63c94248b34a9477f9a161,
stepfunc_d066bdbb488f43052fd49dea283086db_1782ece16e63c94248b34a9477f9a161,
NULL}; 
extern const BulletStepFunc bullet_c51de9642ddb2413a1289534c02fab60_1782ece16e63c94248b34a9477f9a161[] = { 
stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161,
stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161,
stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161,
stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161,
stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_1782ece16e63c94248b34a9477f9a161,
NULL}; 
void stepfunc_8fff89501dcb48caade16bb16deb7b61_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_d066bdbb488f43052fd49dea283086db_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+10.0-20.0*FixedPointNum::random())) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(30.0);  FixedPointNum speed = 0.1;p->setAccel(speed, life);}
}
void stepfunc_c172a15bb6eca889f748350b364028cc_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_1b06bd7cd61093206f6e49c41b6259bf_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0-30.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9c83a26f937f329ad371839d8e81cff9_1782ece16e63c94248b34a9477f9a161); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0+30.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9c83a26f937f329ad371839d8e81cff9_1782ece16e63c94248b34a9477f9a161); 
  }
}
}
void stepfunc_4b5040d7ffcba8a69d6b6864f698c4f8_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4de5e79cd4fab2ccf79a4839285fc8c0_1782ece16e63c94248b34a9477f9a161); 
  }
}
p->wait = static_cast<u16>(3.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_92525806be8fc05532d30eeaaf032e00_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e4d24e4fd756a1be9966cf9cb35d7fa1_1782ece16e63c94248b34a9477f9a161); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e4d24e4fd756a1be9966cf9cb35d7fa1_1782ece16e63c94248b34a9477f9a161); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-5.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e4d24e4fd756a1be9966cf9cb35d7fa1_1782ece16e63c94248b34a9477f9a161); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-15.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_e4d24e4fd756a1be9966cf9cb35d7fa1_1782ece16e63c94248b34a9477f9a161); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_da51538195786ae3cb0fa407c393e49e_1782ece16e63c94248b34a9477f9a161(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(5.0-10.0*FixedPointNum::random())));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_f13328390ff7fa5b2d333e7d97622996_1782ece16e63c94248b34a9477f9a161); 
  }
}
p->wait = static_cast<u16>(90.0); 
}


BulletInfo *genBulletFunc_1782ece16e63c94248b34a9477f9a161(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_c51de9642ddb2413a1289534c02fab60_1782ece16e63c94248b34a9477f9a161); 
  }
return bi;}


