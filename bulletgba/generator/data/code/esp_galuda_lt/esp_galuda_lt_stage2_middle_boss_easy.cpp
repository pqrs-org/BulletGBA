// XXX uniqID XXX 2f8ce762a4f0544ddd5536127bb805a1 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "esp_galuda_lt/esp_galuda_lt_stage2_middle_boss_easy.hpp" 

extern const BulletStepFunc bullet_3f1f1a216936ac8f3fa5a0b083e8ff9b_2f8ce762a4f0544ddd5536127bb805a1[] = { 
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1,
stepfunc_ae9f735c6401a821cc04ce1cd68278bf_2f8ce762a4f0544ddd5536127bb805a1,
NULL}; 
void stepfunc_72b13477beb9686c3e16ed03ea57916a_2f8ce762a4f0544ddd5536127bb805a1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(
0.0
));  p->lastBulletSpeed = p->lastBulletSpeed + (
0.2
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_fa41394e25ea4c208aaa075a4a74a526_2f8ce762a4f0544ddd5536127bb805a1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(
-20.0
));  p->lastBulletSpeed = (
1.3
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 13; ++i) { 
stepfunc_72b13477beb9686c3e16ed03ea57916a_2f8ce762a4f0544ddd5536127bb805a1(p);}
}
void stepfunc_eeeddcf3b4ef8a9b382bb0135216989a_2f8ce762a4f0544ddd5536127bb805a1(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(
25.0+FixedPointNum::random()*30.0
));  p->lastBulletSpeed = (
1.3
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 13; ++i) { 
stepfunc_72b13477beb9686c3e16ed03ea57916a_2f8ce762a4f0544ddd5536127bb805a1(p);}
for (u32 i = 0; i < 4; ++i) { 
stepfunc_fa41394e25ea4c208aaa075a4a74a526_2f8ce762a4f0544ddd5536127bb805a1(p);}
p->wait = static_cast<u16>(
30.0-1.0*20.0
); 
}
void stepfunc_ae9f735c6401a821cc04ce1cd68278bf_2f8ce762a4f0544ddd5536127bb805a1(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_2f8ce762a4f0544ddd5536127bb805a1(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_3f1f1a216936ac8f3fa5a0b083e8ff9b_2f8ce762a4f0544ddd5536127bb805a1); 
  }
return bi;}


