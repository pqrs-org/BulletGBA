// XXX uniqID XXX 947e8aa6ad8a209afce8afda417721cf XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/stone6.hpp" 

extern const BulletStepFunc bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf[] = { 
stepfunc_19821f11904f21483bbc290f3f120b00_947e8aa6ad8a209afce8afda417721cf,
stepfunc_89970219be9841b916b65b4a851c58e9_947e8aa6ad8a209afce8afda417721cf,
NULL}; 
extern const BulletStepFunc bullet_d9df0fe8ef0c9b4a5f2595541ee11d28_947e8aa6ad8a209afce8afda417721cf[] = { 
stepfunc_330a838cb816147baddfe51957a8cb60_947e8aa6ad8a209afce8afda417721cf,
stepfunc_502e3006379ec829e0767d477f326bc9_947e8aa6ad8a209afce8afda417721cf,
stepfunc_adb3babde62e4696a7c0ff199a7228dc_947e8aa6ad8a209afce8afda417721cf,
stepfunc_291ea2d7a3089a6eb0fc127cee0914d6_947e8aa6ad8a209afce8afda417721cf,
stepfunc_1a90ab24a5d2788850b1f98166f097b4_947e8aa6ad8a209afce8afda417721cf,
stepfunc_7759502c436453d222b661167861312b_947e8aa6ad8a209afce8afda417721cf,
NULL}; 
void stepfunc_d48778f14d2240a9b455b3233cd90bcc_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(8.0));  p->lastBulletSpeed = (1.3+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_19821f11904f21483bbc290f3f120b00_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_89970219be9841b916b65b4a851c58e9_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
for (u32 i = 0; i < 45; ++i) { 
stepfunc_d48778f14d2240a9b455b3233cd90bcc_947e8aa6ad8a209afce8afda417721cf(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_330a838cb816147baddfe51957a8cb60_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(150.0));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_502e3006379ec829e0767d477f326bc9_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(210.0));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_adb3babde62e4696a7c0ff199a7228dc_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(135.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_291ea2d7a3089a6eb0fc127cee0914d6_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(225.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_1a90ab24a5d2788850b1f98166f097b4_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(135.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_7759502c436453d222b661167861312b_947e8aa6ad8a209afce8afda417721cf(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(225.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_25d4616976113890e372fbd7713d71dc_947e8aa6ad8a209afce8afda417721cf); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_947e8aa6ad8a209afce8afda417721cf(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_d9df0fe8ef0c9b4a5f2595541ee11d28_947e8aa6ad8a209afce8afda417721cf); 
  }
return bi;}


