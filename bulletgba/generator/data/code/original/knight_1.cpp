// XXX uniqID XXX 8e434a11503a22d1ef27350c862bf5fb XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/knight_1.hpp" 

extern const BulletStepFunc bullet_7ea4a2a8aac57b81731c404a309c1041_8e434a11503a22d1ef27350c862bf5fb[] = { 
stepfunc_f4323c2faff95e5d43596ceb701f1f8c_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9e3d43e65f870a4f983e04b5978717ab_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9e3d43e65f870a4f983e04b5978717ab_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9e3d43e65f870a4f983e04b5978717ab_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9e3d43e65f870a4f983e04b5978717ab_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_8e434a11503a22d1ef27350c862bf5fb,
NULL}; 
extern const BulletStepFunc bullet_ff8815b69717cece5578eb751f5a7607_8e434a11503a22d1ef27350c862bf5fb[] = { 
stepfunc_af6f30095ad202a2168cf8abd106b5ca_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_9e95b4e0bc3d774fdaaa8b17e43477e3_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_de9cf7e8836f8491a94c0b2e7ffac624_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_aadb08ff94c4b70f67cbf81c7737e8e5_8e434a11503a22d1ef27350c862bf5fb,
stepfunc_cac3dc495cdf64fa642249b1b7e90d4e_8e434a11503a22d1ef27350c862bf5fb,
NULL}; 
extern const BulletStepFunc bullet_512ddc354eb89415cfa49f5d655eb6b0_8e434a11503a22d1ef27350c862bf5fb[] = { 
stepfunc_cec0ba8529305220423e42c2d0f031e6_8e434a11503a22d1ef27350c862bf5fb,
NULL}; 
void stepfunc_6e895e2dd05a396b4dcb8b431374d990_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(10.0 - 8.0 * 1.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.05);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_af6f30095ad202a2168cf8abd106b5ca_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(30.0);  FixedPointNum speed = FixedPointNum(0.001 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_9e95b4e0bc3d774fdaaa8b17e43477e3_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0)) - p->getAngle();p->setRound(speed, life);}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_de9cf7e8836f8491a94c0b2e7ffac624_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-20.0));  p->lastBulletSpeed = (0.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 29; ++i) { 
stepfunc_6e895e2dd05a396b4dcb8b431374d990_8e434a11503a22d1ef27350c862bf5fb(p);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_aadb08ff94c4b70f67cbf81c7737e8e5_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 29; ++i) { 
stepfunc_6e895e2dd05a396b4dcb8b431374d990_8e434a11503a22d1ef27350c862bf5fb(p);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_cac3dc495cdf64fa642249b1b7e90d4e_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(20.0));  p->lastBulletSpeed = (0.7);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 29; ++i) { 
stepfunc_6e895e2dd05a396b4dcb8b431374d990_8e434a11503a22d1ef27350c862bf5fb(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_88c4465addc145d8adda1ea89d637145_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(10.0);  FixedPointNum speed = FixedPointNum(SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0)) - p->getAngle(), life);p->setRound(speed, life);}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_9e3d43e65f870a4f983e04b5978717ab_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-70.0 + 20.0 * FixedPointNum::random()));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_ff8815b69717cece5578eb751f5a7607_8e434a11503a22d1ef27350c862bf5fb); 
  }
}
}
void stepfunc_f4323c2faff95e5d43596ceb701f1f8c_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(120.0);  FixedPointNum speed = FixedPointNum(1.1 - p->getSpeed(), life);p->setAccel(speed, life);}
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_cec0ba8529305220423e42c2d0f031e6_8e434a11503a22d1ef27350c862bf5fb(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_7ea4a2a8aac57b81731c404a309c1041_8e434a11503a22d1ef27350c862bf5fb); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_8e434a11503a22d1ef27350c862bf5fb(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_512ddc354eb89415cfa49f5d655eb6b0_8e434a11503a22d1ef27350c862bf5fb); 
  }
return bi;}


