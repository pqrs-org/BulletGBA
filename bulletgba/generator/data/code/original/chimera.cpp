// XXX uniqID XXX a86f7e1e82d4467f5c0ac24b35488895 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/chimera.hpp" 

extern const BulletStepFunc bullet_55725d35cb3d6a7aa76bc026a1101fbd_a86f7e1e82d4467f5c0ac24b35488895[] = { 
stepfunc_e5dac1bb74454b91cc93ecde5d45150f_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_4421ea8f7c82eb0a627b8618fc8ab6fc_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_daca9c341c5ba8ed2ed41f3787bda013_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_a4c5f1a23bfdf6b42d438b912984fa93_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_daca9c341c5ba8ed2ed41f3787bda013_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_a4c5f1a23bfdf6b42d438b912984fa93_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_daca9c341c5ba8ed2ed41f3787bda013_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_a4c5f1a23bfdf6b42d438b912984fa93_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_a86f7e1e82d4467f5c0ac24b35488895,
NULL}; 
extern const BulletStepFunc bullet_08eed54b73bbecc3c86ffc7742249e9a_a86f7e1e82d4467f5c0ac24b35488895[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_fc249318586044066619d4d388ea6a07_a86f7e1e82d4467f5c0ac24b35488895,
NULL}; 
extern const BulletStepFunc bullet_f5da09742f9a3d19613e76950fe76a3c_a86f7e1e82d4467f5c0ac24b35488895[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895,
stepfunc_c13d25a716b301028029b67a41cdda6f_a86f7e1e82d4467f5c0ac24b35488895,
NULL}; 
extern const BulletStepFunc bullet_67b8a7ed2f2f40a6a9b17d003d412b5a_a86f7e1e82d4467f5c0ac24b35488895[] = { 
stepfunc_376f6b5a5e78e8c91f906d72b299841a_a86f7e1e82d4467f5c0ac24b35488895,
NULL}; 
void stepfunc_5172d54cdc49913f0cec2f7a000dd87a_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle((40.0) - 45.0 + 90.0 * FixedPointNum::random()));  p->lastBulletSpeed = (3.5 + 1.0 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_95874c360a4c89e01fddd0381e0669e0_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_5141677ced7d93c881aca1376bc411b8_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.001 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_fc249318586044066619d4d388ea6a07_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
for (u32 i = 0; i < 250; ++i) { 
stepfunc_5172d54cdc49913f0cec2f7a000dd87a_a86f7e1e82d4467f5c0ac24b35488895(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_09ec691b7caed59b6b5425e3e5b4ec5c_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle((-40.0) - 45.0 + 90.0 * FixedPointNum::random()));  p->lastBulletSpeed = (3.5 + 1.0 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_c13d25a716b301028029b67a41cdda6f_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
for (u32 i = 0; i < 250; ++i) { 
stepfunc_09ec691b7caed59b6b5425e3e5b4ec5c_a86f7e1e82d4467f5c0ac24b35488895(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_daca9c341c5ba8ed2ed41f3787bda013_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(170.0 + 20.0 * FixedPointNum::random())) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.85 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(40.0); 
}
void stepfunc_a4c5f1a23bfdf6b42d438b912984fa93_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(60.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_f5da09742f9a3d19613e76950fe76a3c_a86f7e1e82d4467f5c0ac24b35488895); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-60.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_08eed54b73bbecc3c86ffc7742249e9a_a86f7e1e82d4467f5c0ac24b35488895); 
  }
}
p->wait = static_cast<u16>(45.0); 
}
void stepfunc_e5dac1bb74454b91cc93ecde5d45150f_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
p->wait = static_cast<u16>(40.0); 
}
void stepfunc_4421ea8f7c82eb0a627b8618fc8ab6fc_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(90.0);  FixedPointNum speed = FixedPointNum((FixedPointNum::degree2angle(160.0 + 40.0 * FixedPointNum::random())) - p->getAngle(), life);p->setRound(speed, life);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(60.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_f5da09742f9a3d19613e76950fe76a3c_a86f7e1e82d4467f5c0ac24b35488895); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(-60.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_08eed54b73bbecc3c86ffc7742249e9a_a86f7e1e82d4467f5c0ac24b35488895); 
  }
}
p->wait = static_cast<u16>(90.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_376f6b5a5e78e8c91f906d72b299841a_a86f7e1e82d4467f5c0ac24b35488895(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_55725d35cb3d6a7aa76bc026a1101fbd_a86f7e1e82d4467f5c0ac24b35488895); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_a86f7e1e82d4467f5c0ac24b35488895(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_67b8a7ed2f2f40a6a9b17d003d412b5a_a86f7e1e82d4467f5c0ac24b35488895); 
  }
return bi;}


