// XXX uniqID XXX 13502a3a88c363b210c8c82286210240 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/knight_2.hpp" 

extern const BulletStepFunc bullet_9f8c125deb323227e85c21652c0ccb1e_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240,
stepfunc_0b725083a5d1cf9d803659ffbb8fbe57_13502a3a88c363b210c8c82286210240,
stepfunc_cc4cf889ad731e17ad0a391a0a2d4163_13502a3a88c363b210c8c82286210240,
NULL}; 
extern const BulletStepFunc bullet_3540af95aff48827550580540e3b04bd_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240,
stepfunc_b2b9cd795f8b7f26ec7d612d6ec7185e_13502a3a88c363b210c8c82286210240,
stepfunc_73fbb343fdd281c03ee4b7a21c3ef3aa_13502a3a88c363b210c8c82286210240,
NULL}; 
extern const BulletStepFunc bullet_67a86050281b1926adadf635f15b18a6_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240,
stepfunc_5f11b8d1a69c0be946f15cbdd9c57f6e_13502a3a88c363b210c8c82286210240,
stepfunc_1ec43b84b857463bbf4d760425c8f264_13502a3a88c363b210c8c82286210240,
NULL}; 
extern const BulletStepFunc bullet_0f9277e3befc974942674bcf65613c9a_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240,
stepfunc_9a75dba2f15715b9f692d175bf12e362_13502a3a88c363b210c8c82286210240,
stepfunc_15396b14c7fbd3431ef4c7b0c4c8d90e_13502a3a88c363b210c8c82286210240,
NULL}; 
extern const BulletStepFunc bullet_a1616f0652610ac09d504ecaf94bd987_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240,
stepfunc_7749697662468af5790d1fe35d3f949b_13502a3a88c363b210c8c82286210240,
stepfunc_9634614d001b578978c19a5cb6c190a6_13502a3a88c363b210c8c82286210240,
NULL}; 
extern const BulletStepFunc bullet_2181090fba0a2a7813fb82518185d7da_13502a3a88c363b210c8c82286210240[] = { 
stepfunc_b7fed73b5e2afa3a1b59c2876172ef6d_13502a3a88c363b210c8c82286210240,
stepfunc_59724dfe1a08b2db207907f82bdab9f0_13502a3a88c363b210c8c82286210240,
stepfunc_0926ee6fa39abec72e0f6f707646cd01_13502a3a88c363b210c8c82286210240,
stepfunc_fd2eef99cda48399e943d2cbc3ba701e_13502a3a88c363b210c8c82286210240,
stepfunc_d1e2a8314b07f245cb0d49c9da584e24_13502a3a88c363b210c8c82286210240,
NULL}; 
void stepfunc_d375f926e8630a8dcf1ecee92d9e04b1_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0 / (19.0 + 100.0 * 1.0)));  p->lastBulletSpeed = ((1.8) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_95874c360a4c89e01fddd0381e0669e0_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_0b725083a5d1cf9d803659ffbb8fbe57_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>((10.0)); 
}
void stepfunc_cc4cf889ad731e17ad0a391a0a2d4163_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = ((1.8) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 119; ++i) { 
stepfunc_d375f926e8630a8dcf1ecee92d9e04b1_13502a3a88c363b210c8c82286210240(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_b9a6e8d2e235e1b015a68844fb952ece_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0 / (19.0 + 100.0 * 1.0)));  p->lastBulletSpeed = ((1.6) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b2b9cd795f8b7f26ec7d612d6ec7185e_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>((30.0)); 
}
void stepfunc_73fbb343fdd281c03ee4b7a21c3ef3aa_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = ((1.6) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 119; ++i) { 
stepfunc_b9a6e8d2e235e1b015a68844fb952ece_13502a3a88c363b210c8c82286210240(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_184e9f40c56bde60405ced00a7bf3a28_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0 / (19.0 + 100.0 * 1.0)));  p->lastBulletSpeed = ((1.4) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_5f11b8d1a69c0be946f15cbdd9c57f6e_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>((50.0)); 
}
void stepfunc_1ec43b84b857463bbf4d760425c8f264_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = ((1.4) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 119; ++i) { 
stepfunc_184e9f40c56bde60405ced00a7bf3a28_13502a3a88c363b210c8c82286210240(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_0c3e2ee6d973f1f9336d60aa48f204eb_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0 / (19.0 + 100.0 * 1.0)));  p->lastBulletSpeed = ((1.2) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_9a75dba2f15715b9f692d175bf12e362_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>((70.0)); 
}
void stepfunc_15396b14c7fbd3431ef4c7b0c4c8d90e_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = ((1.2) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 119; ++i) { 
stepfunc_0c3e2ee6d973f1f9336d60aa48f204eb_13502a3a88c363b210c8c82286210240(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_fde1fb828fc6073fa0ec720642a277e2_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(360.0 / (19.0 + 100.0 * 1.0)));  p->lastBulletSpeed = ((1.0) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_7749697662468af5790d1fe35d3f949b_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>((90.0)); 
}
void stepfunc_9634614d001b578978c19a5cb6c190a6_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = ((1.0) * (0.5 + 0.5 * 1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 119; ++i) { 
stepfunc_fde1fb828fc6073fa0ec720642a277e2_13502a3a88c363b210c8c82286210240(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_b7fed73b5e2afa3a1b59c2876172ef6d_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(120.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a1616f0652610ac09d504ecaf94bd987_13502a3a88c363b210c8c82286210240); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_59724dfe1a08b2db207907f82bdab9f0_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(150.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0f9277e3befc974942674bcf65613c9a_13502a3a88c363b210c8c82286210240); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_0926ee6fa39abec72e0f6f707646cd01_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_67a86050281b1926adadf635f15b18a6_13502a3a88c363b210c8c82286210240); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_fd2eef99cda48399e943d2cbc3ba701e_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(210.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3540af95aff48827550580540e3b04bd_13502a3a88c363b210c8c82286210240); 
  }
}
p->wait = static_cast<u16>(10.0); 
}
void stepfunc_d1e2a8314b07f245cb0d49c9da584e24_13502a3a88c363b210c8c82286210240(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(240.0));  p->lastBulletSpeed = (2.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_9f8c125deb323227e85c21652c0ccb1e_13502a3a88c363b210c8c82286210240); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_13502a3a88c363b210c8c82286210240(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_2181090fba0a2a7813fb82518185d7da_13502a3a88c363b210c8c82286210240); 
  }
return bi;}


