// XXX uniqID XXX 6ca6e23ea30d77337f770767a44bb9e1 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "daiouzyou/round_6_boss_4.hpp" 

extern const BulletStepFunc bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_5d03315a8c272d03fb11c7d4f560c1d8_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
extern const BulletStepFunc bullet_4e990f08ea49b93a016450f5d57404a2_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_1dc1aab53f88bdac2c06fb10668de5d0_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
extern const BulletStepFunc bullet_a09969e7ff73afff21415ba89410572c_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_93b14fd2b639c3cef1557729761c2998_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
extern const BulletStepFunc bullet_96e63321f6ee3252edddae24f64edf52_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_dacdea11cfc8cc3360b914688fb66d1d_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
extern const BulletStepFunc bullet_bf95560cb793d82cfac13c45ceb4b6a2_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_95d1af7412063d9d61b4fb6f7526877e_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
extern const BulletStepFunc bullet_c7be441eb719104f28ffd72819d5444d_6ca6e23ea30d77337f770767a44bb9e1[] = { 
stepfunc_956d5baedb9f7d61507ce12a95dd1a66_6ca6e23ea30d77337f770767a44bb9e1,
stepfunc_0f0513c371bc0142d7db3aedfd6d0c56_6ca6e23ea30d77337f770767a44bb9e1,
stepfunc_146f0c45ae191647195649e7cd80e0dd_6ca6e23ea30d77337f770767a44bb9e1,
stepfunc_0f0513c371bc0142d7db3aedfd6d0c56_6ca6e23ea30d77337f770767a44bb9e1,
stepfunc_454c4d68a3d76bae39d4838e676fd646_6ca6e23ea30d77337f770767a44bb9e1,
stepfunc_309d59a7e3ab8273b60e538a81ed8c64_6ca6e23ea30d77337f770767a44bb9e1,
NULL}; 
void stepfunc_95d1af7412063d9d61b4fb6f7526877e_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-4.0));  p->lastBulletSpeed = (1.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(4.0));  p->lastBulletSpeed = (1.0+1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_c9ce9f73046f877c36f3e22af4a345d1_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(22.5));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_bf95560cb793d82cfac13c45ceb4b6a2_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
}
void stepfunc_5d03315a8c272d03fb11c7d4f560c1d8_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_bf95560cb793d82cfac13c45ceb4b6a2_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
for (u32 i = 0; i < 15; ++i) { 
stepfunc_c9ce9f73046f877c36f3e22af4a345d1_6ca6e23ea30d77337f770767a44bb9e1(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_1387a33ffe11a79e10ab6af906ddbad5_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*16.0-8.0));  p->lastBulletSpeed = (((1.2)+FixedPointNum::random()*(1.2))*(1.0+1.0*1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_1dc1aab53f88bdac2c06fb10668de5d0_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
for (u32 i = 0; i < 16; ++i) { 
stepfunc_1387a33ffe11a79e10ab6af906ddbad5_6ca6e23ea30d77337f770767a44bb9e1(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_53d83aa129b44748a55b566ee8e70d1a_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*16.0-8.0));  p->lastBulletSpeed = (((1.0)+FixedPointNum::random()*(1.0))*(1.0+1.0*1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_93b14fd2b639c3cef1557729761c2998_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
for (u32 i = 0; i < 16; ++i) { 
stepfunc_53d83aa129b44748a55b566ee8e70d1a_6ca6e23ea30d77337f770767a44bb9e1(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_ccbe911c81cda1b8469ed7e3e8cc4b6d_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*16.0-8.0));  p->lastBulletSpeed = (((0.8)+FixedPointNum::random()*(0.8))*(1.0+1.0*1.0));  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_dacdea11cfc8cc3360b914688fb66d1d_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
for (u32 i = 0; i < 16; ++i) { 
stepfunc_ccbe911c81cda1b8469ed7e3e8cc4b6d_6ca6e23ea30d77337f770767a44bb9e1(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_956d5baedb9f7d61507ce12a95dd1a66_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_96e63321f6ee3252edddae24f64edf52_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_0f0513c371bc0142d7db3aedfd6d0c56_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
p->wait = static_cast<u16>(100.0); 
}
void stepfunc_146f0c45ae191647195649e7cd80e0dd_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a09969e7ff73afff21415ba89410572c_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_454c4d68a3d76bae39d4838e676fd646_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = 1;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_4e990f08ea49b93a016450f5d57404a2_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_309d59a7e3ab8273b60e538a81ed8c64_6ca6e23ea30d77337f770767a44bb9e1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (SelfPos::getAngle(p));  p->lastBulletSpeed = (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_11e8f3adb55c31d64d642863818910d8_6ca6e23ea30d77337f770767a44bb9e1); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_6ca6e23ea30d77337f770767a44bb9e1(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_c7be441eb719104f28ffd72819d5444d_6ca6e23ea30d77337f770767a44bb9e1); 
  }
return bi;}


