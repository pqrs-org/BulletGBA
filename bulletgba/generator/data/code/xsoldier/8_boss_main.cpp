// XXX uniqID XXX 858402347f4b1b834176a79b683729a8 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "xsoldier/8_boss_main.hpp" 

extern const BulletStepFunc bullet_c30da5e4cc8fe1fe389c2548b6a838c4_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_655affb84848ee9d61919e3368f17fc9_858402347f4b1b834176a79b683729a8,
NULL}; 
extern const BulletStepFunc bullet_ea645034cff55d83cbd940487416019f_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_f810ab5893ee5ad6caa88b8336a56293_858402347f4b1b834176a79b683729a8,
NULL}; 
extern const BulletStepFunc bullet_06bb93816aaa82a52a1ee1bff0ebf865_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_7560c1e38c1491ec5de602880ef48bcf_858402347f4b1b834176a79b683729a8,
NULL}; 
extern const BulletStepFunc bullet_b82dc10f85904783efe3888aa3b50911_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_f09105c504440e7540889e6c66442be5_858402347f4b1b834176a79b683729a8,
NULL}; 
extern const BulletStepFunc bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_858402347f4b1b834176a79b683729a8,
stepfunc_2f2f485eed0e16f67838962c186ba561_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_858402347f4b1b834176a79b683729a8,
NULL}; 
extern const BulletStepFunc bullet_606e59a3d4c6dbcdcc751bcd6aa62868_858402347f4b1b834176a79b683729a8[] = { 
stepfunc_108f2b9babbe4d6d57a5226bd9901b0e_858402347f4b1b834176a79b683729a8,
stepfunc_b76e8e4ef4102f951561d3d5e43118e6_858402347f4b1b834176a79b683729a8,
stepfunc_375a84cb389bc6a9316fa334e4197476_858402347f4b1b834176a79b683729a8,
NULL}; 
void stepfunc_14012744ea6a8e53cc200fa7d62e2dd4_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = ((1.8));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_655affb84848ee9d61919e3368f17fc9_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((2.5)));  p->lastBulletSpeed = ((1.8));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 71; ++i) { 
stepfunc_14012744ea6a8e53cc200fa7d62e2dd4_858402347f4b1b834176a79b683729a8(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_308076b56fc77ed4a2bcba690958e0e2_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = ((1.5));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_f810ab5893ee5ad6caa88b8336a56293_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((0.0)));  p->lastBulletSpeed = ((1.5));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 71; ++i) { 
stepfunc_308076b56fc77ed4a2bcba690958e0e2_858402347f4b1b834176a79b683729a8(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_0e039200e1fe776931962aad2f7780ef_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (3.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(1.0); 
}
void stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_2f2f485eed0e16f67838962c186ba561_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(105.0 - 1.0 * 90.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_7560c1e38c1491ec5de602880ef48bcf_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((270.0)));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((270.0)));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((270.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((270.0)));  p->lastBulletSpeed = (1.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_f09105c504440e7540889e6c66442be5_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((90.0)));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((90.0)));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((90.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((90.0)));  p->lastBulletSpeed = (1.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9affbf3b973f77b6b7eaf5c051bb80ce_858402347f4b1b834176a79b683729a8); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_108f2b9babbe4d6d57a5226bd9901b0e_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b82dc10f85904783efe3888aa3b50911_858402347f4b1b834176a79b683729a8); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_06bb93816aaa82a52a1ee1bff0ebf865_858402347f4b1b834176a79b683729a8); 
  }
}
p->wait = static_cast<u16>(100.0 - 1.0 * 90.0); 
}
void stepfunc_b76e8e4ef4102f951561d3d5e43118e6_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ea645034cff55d83cbd940487416019f_858402347f4b1b834176a79b683729a8); 
  }
}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_375a84cb389bc6a9316fa334e4197476_858402347f4b1b834176a79b683729a8(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_c30da5e4cc8fe1fe389c2548b6a838c4_858402347f4b1b834176a79b683729a8); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_858402347f4b1b834176a79b683729a8(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_606e59a3d4c6dbcdcc751bcd6aa62868_858402347f4b1b834176a79b683729a8); 
  }
return bi;}


