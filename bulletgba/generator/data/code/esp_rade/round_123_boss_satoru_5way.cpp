// XXX uniqID XXX 5ecb76d069db4398d4003a1a9694fc3a XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "esp_rade/round_123_boss_satoru_5way.hpp" 

extern const BulletStepFunc bullet_1a4d0712b7fe53487f96b7f4975ea309_5ecb76d069db4398d4003a1a9694fc3a[] = { 
stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_5ecb76d069db4398d4003a1a9694fc3a,
NULL}; 
void stepfunc_4589f292cb1aa238d2a5d30402466c1c_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_d1fee59d10dfe5dbf5d355ae75626b2f_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_9d61e226751abd2725c82462cbc9c32e_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b777e1a9822e4b4d3e05e1be6b315869_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_34a73673a18c1c8bb6ae6893fbe0fa58_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_0db2c6b3bf8bd5309f3689000d968c4d_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_de3b29a52320375d306dda68b1dc58bb_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_a48b3623122679a20251452186680aa2_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_3a69de561c8b13cabd973dd623f9ef4a_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_40ab88d371b53afe02485e95d1c060c9_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_e22859a4cc131683004d0a78976e4fc5_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_8790f8af6785aa277b0a2290ffe5fdf1_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_38b6d0cc52c3fdc379a55e15e5701d41_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_99ff65d1e5eb4da99d11a3d3c252adee_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_3823f0855f2c6a595e28abd3b30c61d5_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_acdeefae6cbe8c350f5457454de6f03e_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_d066250da19dd3edc35073d6b6f9a268_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_0b97877c641d9fa01a3504d5c9703f77_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_b4d162c9ffb9e2f0b111ff74da48e415_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_3d26a7b5d00ca4785a006f2e5ebc3451_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_a87f23aa0a4a339241fe48321ec16d54_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_5aaee11fc944f943c12afeacda085279_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_4b233616af0231a3800dfce5ec63fb05_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_bc80be0b59787d3aa2591478ea506ee5_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_7d26b7bb30928548b0a435d8c676b1f9_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_bc520f48bf863fa909eed342ae6a63c7_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(FixedPointNum::random()*360.0)) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 2.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_5ffc7eab9713b28d43f8c6f7eef885d0_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_7d26b7bb30928548b0a435d8c676b1f9_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_bc80be0b59787d3aa2591478ea506ee5_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_4b233616af0231a3800dfce5ec63fb05_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_5aaee11fc944f943c12afeacda085279_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((1.0)))*FixedPointNum::random()*2.0-(((1.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_a87f23aa0a4a339241fe48321ec16d54_5ecb76d069db4398d4003a1a9694fc3a(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(90.0-1.0*60.0); 
}
void stepfunc_ccf46fc714da64bc778f053075f497c7_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_3d26a7b5d00ca4785a006f2e5ebc3451_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_b4d162c9ffb9e2f0b111ff74da48e415_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_0b97877c641d9fa01a3504d5c9703f77_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_d066250da19dd3edc35073d6b6f9a268_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((2.0)))*FixedPointNum::random()*2.0-(((2.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_acdeefae6cbe8c350f5457454de6f03e_5ecb76d069db4398d4003a1a9694fc3a(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(90.0-1.0*60.0); 
}
void stepfunc_248ba7a625eaefba8e548b1db6cbe60c_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_3823f0855f2c6a595e28abd3b30c61d5_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_99ff65d1e5eb4da99d11a3d3c252adee_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_38b6d0cc52c3fdc379a55e15e5701d41_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_8790f8af6785aa277b0a2290ffe5fdf1_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((3.0)))*FixedPointNum::random()*2.0-(((3.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_e22859a4cc131683004d0a78976e4fc5_5ecb76d069db4398d4003a1a9694fc3a(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(90.0-1.0*60.0); 
}
void stepfunc_17086c9096ef575b64e09e4afa0faf2a_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_40ab88d371b53afe02485e95d1c060c9_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_3a69de561c8b13cabd973dd623f9ef4a_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_a48b3623122679a20251452186680aa2_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_de3b29a52320375d306dda68b1dc58bb_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((4.0)))*FixedPointNum::random()*2.0-(((4.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_0db2c6b3bf8bd5309f3689000d968c4d_5ecb76d069db4398d4003a1a9694fc3a(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(90.0-1.0*60.0); 
}
void stepfunc_e553f83e1d34665a6a478a24901980ac_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-30.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_34a73673a18c1c8bb6ae6893fbe0fa58_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((-15.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_b777e1a9822e4b4d3e05e1be6b315869_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((0.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_9d61e226751abd2725c82462cbc9c32e_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((15.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_d1fee59d10dfe5dbf5d355ae75626b2f_5ecb76d069db4398d4003a1a9694fc3a(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0)+(((5.0)))*FixedPointNum::random()*2.0-(((5.0)))));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 20; ++i) { 
stepfunc_4589f292cb1aa238d2a5d30402466c1c_5ecb76d069db4398d4003a1a9694fc3a(p);}
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = 0.0 - p->getSpeed();p->setAccel(speed, life);}
p->wait = static_cast<u16>(90.0-1.0*60.0); 
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_5ecb76d069db4398d4003a1a9694fc3a(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_5ecb76d069db4398d4003a1a9694fc3a(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_1a4d0712b7fe53487f96b7f4975ea309_5ecb76d069db4398d4003a1a9694fc3a); 
  }
return bi;}


