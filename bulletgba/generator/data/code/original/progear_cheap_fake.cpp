// XXX uniqID XXX fb01f8b09ccca05988dac5a41efd182d XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/progear_cheap_fake.hpp" 

extern const BulletStepFunc bullet_96fc0eb98531d4df958adae3c77f415c_fb01f8b09ccca05988dac5a41efd182d[] = { 
stepfunc_3efc47c9ff9608d8b8679627ca2dbeba_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_d7270068df0ea6208f56ba00e5be5f92_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_3efc47c9ff9608d8b8679627ca2dbeba_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_d7270068df0ea6208f56ba00e5be5f92_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_3efc47c9ff9608d8b8679627ca2dbeba_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_d7270068df0ea6208f56ba00e5be5f92_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_3efc47c9ff9608d8b8679627ca2dbeba_fb01f8b09ccca05988dac5a41efd182d,
NULL}; 
extern const BulletStepFunc bullet_0e882e6df8162989fb6e8be6f70fdb0b_fb01f8b09ccca05988dac5a41efd182d[] = { 
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_fb01f8b09ccca05988dac5a41efd182d,
NULL}; 
void stepfunc_e1bb12f56d3a739d843fc11714f7bf77_fb01f8b09ccca05988dac5a41efd182d(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (1.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-90.0));  p->lastBulletSpeed = (1.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_3efc47c9ff9608d8b8679627ca2dbeba_fb01f8b09ccca05988dac5a41efd182d(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(30.0);  FixedPointNum speed = FixedPointNum(1.5 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_d7270068df0ea6208f56ba00e5be5f92_fb01f8b09ccca05988dac5a41efd182d(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(20.0);  FixedPointNum speed = FixedPointNum(SelfPos::getAngle(p) + (FixedPointNum::degree2angle(60.0-120.0*FixedPointNum::random())) - p->getAngle(), life);p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(20.0);  FixedPointNum speed = FixedPointNum(0.1 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_7ab903c14fcad00fca2950a27bd542f4_fb01f8b09ccca05988dac5a41efd182d(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_96fc0eb98531d4df958adae3c77f415c_fb01f8b09ccca05988dac5a41efd182d); 
  }
}
p->wait = static_cast<u16>(60.0-1.0*30.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_fb01f8b09ccca05988dac5a41efd182d(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_fb01f8b09ccca05988dac5a41efd182d(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_0e882e6df8162989fb6e8be6f70fdb0b_fb01f8b09ccca05988dac5a41efd182d); 
  }
return bi;}


