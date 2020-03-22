// XXX uniqID XXX 3aec0c6319d08dd7b5f8c41504a17a69 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "mda/fukuro.hpp" 

extern const BulletStepFunc bullet_360125475e32d7dd08a4dedaa61b6c94_3aec0c6319d08dd7b5f8c41504a17a69[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_c3bf4755b70750d382579361405ea55a_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e841a68ba3df471e091474e1e1d3d4f2_3aec0c6319d08dd7b5f8c41504a17a69,
NULL}; 
extern const BulletStepFunc bullet_b24d1bde4c6f6b6c67f920326255fad2_3aec0c6319d08dd7b5f8c41504a17a69[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_132ec58c6b508eeaa618398c709e7c77_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e841a68ba3df471e091474e1e1d3d4f2_3aec0c6319d08dd7b5f8c41504a17a69,
NULL}; 
extern const BulletStepFunc bullet_066cd4f6ffffebdcfb38a9b2d3385ae8_3aec0c6319d08dd7b5f8c41504a17a69[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_198031dab59773a3d31e0f1322b0b68d_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e841a68ba3df471e091474e1e1d3d4f2_3aec0c6319d08dd7b5f8c41504a17a69,
NULL}; 
extern const BulletStepFunc bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69[] = { 
stepfunc_e4513e546a161d1e0107d0ea1b54e073_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_cc640c72c7237dea8372c4439c04f091_3aec0c6319d08dd7b5f8c41504a17a69,
NULL}; 
extern const BulletStepFunc bullet_dfe0d629a1c21a75632de486891c1b27_3aec0c6319d08dd7b5f8c41504a17a69[] = { 
stepfunc_321a52b2346256b63ef1feb5f226c156_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_769bdefb02579aa79348dd03cdd26c8a_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_3aec0c6319d08dd7b5f8c41504a17a69,
NULL}; 
void stepfunc_e4513e546a161d1e0107d0ea1b54e073_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_cc640c72c7237dea8372c4439c04f091_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(5.0);  FixedPointNum speed = FixedPointNum(SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0)) - p->getAngle(), life);p->setRound(speed, life);}
}
void stepfunc_19821f11904f21483bbc290f3f120b00_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_c3bf4755b70750d382579361405ea55a_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>((((1.0)-1.0)*((1.0*18.0+1.0)*10.0))+30.0); 
}
void stepfunc_e841a68ba3df471e091474e1e1d3d4f2_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((60.0)));  p->lastBulletSpeed = ((2.00)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-60.0)));  p->lastBulletSpeed = ((2.00)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((52.5)));  p->lastBulletSpeed = ((1.64)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-52.5)));  p->lastBulletSpeed = ((1.64)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((45.0)));  p->lastBulletSpeed = ((1.41)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-45.0)));  p->lastBulletSpeed = ((1.41)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)));  p->lastBulletSpeed = ((1.16)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)));  p->lastBulletSpeed = ((1.16)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)));  p->lastBulletSpeed = ((1.04)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)));  p->lastBulletSpeed = ((1.04)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)));  p->lastBulletSpeed = ((1.00)*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1eda0a384f73ef484bdc89aa151df562_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_132ec58c6b508eeaa618398c709e7c77_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>((((2.0)-1.0)*((1.0*18.0+1.0)*10.0))+30.0); 
}
void stepfunc_198031dab59773a3d31e0f1322b0b68d_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(0.0 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>((((3.0)-1.0)*((1.0*18.0+1.0)*10.0))+30.0); 
}
void stepfunc_e056d2ef1607a7101f60d46203965994_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/((1.0*18.0+1.0)*3.0)));  p->lastBulletSpeed = (1.75*(3.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_066cd4f6ffffebdcfb38a9b2d3385ae8_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/((1.0*18.0+1.0)*3.0)));  p->lastBulletSpeed = (1.75*(2.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b24d1bde4c6f6b6c67f920326255fad2_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0/((1.0*18.0+1.0)*3.0)));  p->lastBulletSpeed = (1.75*(1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_360125475e32d7dd08a4dedaa61b6c94_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_321a52b2346256b63ef1feb5f226c156_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = (FixedPointNum::degree2angle(180.0)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 1.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_769bdefb02579aa79348dd03cdd26c8a_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_3aec0c6319d08dd7b5f8c41504a17a69(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_3aec0c6319d08dd7b5f8c41504a17a69(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_dfe0d629a1c21a75632de486891c1b27_3aec0c6319d08dd7b5f8c41504a17a69); 
  }
return bi;}


