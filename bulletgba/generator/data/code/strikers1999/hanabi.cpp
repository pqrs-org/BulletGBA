// XXX uniqID XXX 2faff4ec27af1267f0c4341c71d8875b XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "strikers1999/hanabi.hpp" 

extern const BulletStepFunc bullet_135767bb7ee7426f9b713c094edd3d86_2faff4ec27af1267f0c4341c71d8875b[] = { 
stepfunc_b1238107a2a5cb0b4a6d3bbc640397a9_2faff4ec27af1267f0c4341c71d8875b,
stepfunc_d01b40a9d8b71819b18e01afc48b9720_2faff4ec27af1267f0c4341c71d8875b,
NULL}; 
extern const BulletStepFunc bullet_38a9a80b395781e6e2e0897c459f3175_2faff4ec27af1267f0c4341c71d8875b[] = { 
stepfunc_f7c41cc94e828bce67a96c3c46765391_2faff4ec27af1267f0c4341c71d8875b,
NULL}; 
extern const BulletStepFunc bullet_ffc489b7c05278202ca5fbd1b5cf9401_2faff4ec27af1267f0c4341c71d8875b[] = { 
stepfunc_ac07e579c710f7200b9810e572243abb_2faff4ec27af1267f0c4341c71d8875b,
stepfunc_ac07e579c710f7200b9810e572243abb_2faff4ec27af1267f0c4341c71d8875b,
stepfunc_ac07e579c710f7200b9810e572243abb_2faff4ec27af1267f0c4341c71d8875b,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_2faff4ec27af1267f0c4341c71d8875b,
NULL}; 
void stepfunc_67c8f2b4e2ce9de0abec9c6447563a36_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(32.5));  p->lastBulletSpeed = (1.3+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (1.0+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (1.0+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (0.7+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (0.7+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_f7c41cc94e828bce67a96c3c46765391_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (1.3+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (1.0+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (1.0+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (0.7+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (0.7+1.0*0.8);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 16; ++i) { 
stepfunc_67c8f2b4e2ce9de0abec9c6447563a36_2faff4ec27af1267f0c4341c71d8875b(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_978064dbc7a788769602147a5e5c0442_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(32.5));  p->lastBulletSpeed = (2.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (2.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (2.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (1.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (1.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b1238107a2a5cb0b4a6d3bbc640397a9_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
p->wait = static_cast<u16>(15.0); 
}
void stepfunc_d01b40a9d8b71819b18e01afc48b9720_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (2.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (2.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (2.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (1.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (1.5+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 16; ++i) { 
stepfunc_978064dbc7a788769602147a5e5c0442_2faff4ec27af1267f0c4341c71d8875b(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_38a9a80b395781e6e2e0897c459f3175_2faff4ec27af1267f0c4341c71d8875b); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_ac07e579c710f7200b9810e572243abb_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_135767bb7ee7426f9b713c094edd3d86_2faff4ec27af1267f0c4341c71d8875b); 
  }
}
p->wait = static_cast<u16>(110.0-1.0*60.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_2faff4ec27af1267f0c4341c71d8875b(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_2faff4ec27af1267f0c4341c71d8875b(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ffc489b7c05278202ca5fbd1b5cf9401_2faff4ec27af1267f0c4341c71d8875b); 
  }
return bi;}


