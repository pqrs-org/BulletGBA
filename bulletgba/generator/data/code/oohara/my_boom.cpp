// XXX uniqID XXX 8d84a393f0a201f54e2d94962ff66063 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "oohara/my_boom.hpp" 

extern const BulletStepFunc bullet_cbd9bfb74268b71570729036043d7ef4_8d84a393f0a201f54e2d94962ff66063[] = { 
stepfunc_1007c2d46be056c7dc1dfbc6c6c11ad6_8d84a393f0a201f54e2d94962ff66063,
stepfunc_8321c63a86feeab0dcb623cc05e376a7_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_464baec6fc08d8930d77f47df6b5bf49_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063,
stepfunc_ae9f735c6401a821cc04ce1cd68278bf_8d84a393f0a201f54e2d94962ff66063,
NULL}; 
extern const BulletStepFunc bullet_51766b24092e77e160e505c9525c0635_8d84a393f0a201f54e2d94962ff66063[] = { 
stepfunc_1007c2d46be056c7dc1dfbc6c6c11ad6_8d84a393f0a201f54e2d94962ff66063,
stepfunc_591a74a323b632067b444d5109f92b4f_8d84a393f0a201f54e2d94962ff66063,
stepfunc_591a74a323b632067b444d5109f92b4f_8d84a393f0a201f54e2d94962ff66063,
NULL}; 
extern const BulletStepFunc bullet_2947baafb98b0d493ef68ea80d34a565_8d84a393f0a201f54e2d94962ff66063[] = { 
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063,
stepfunc_ae9f735c6401a821cc04ce1cd68278bf_8d84a393f0a201f54e2d94962ff66063,
NULL}; 
void stepfunc_63ee94a861b6ce7c6f58e025fa0bb618_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(-(2.0 + 2.0 * FixedPointNum::random())));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_9be2e7d259ee7576ce09998873f1d346_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(2.0 + 2.0 * FixedPointNum::random()));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_1007c2d46be056c7dc1dfbc6c6c11ad6_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
p->wait = (30.0 + 10.0 * FixedPointNum::random()).toInt(); 
}
void stepfunc_591a74a323b632067b444d5109f92b4f_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(150.0 + 60.0 * FixedPointNum::random()));  p->lastBulletSpeed = (0.4 + 0.3 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 4; ++i) { 
stepfunc_9be2e7d259ee7576ce09998873f1d346_8d84a393f0a201f54e2d94962ff66063(p);}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(150.0 + 60.0 * FixedPointNum::random()));  p->lastBulletSpeed = (0.4 + 0.3 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 4; ++i) { 
stepfunc_63ee94a861b6ce7c6f58e025fa0bb618_8d84a393f0a201f54e2d94962ff66063(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_87babc0c024a43402c572f28dfb6436e_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_51766b24092e77e160e505c9525c0635_8d84a393f0a201f54e2d94962ff66063); 
  }
}
}
void stepfunc_8321c63a86feeab0dcb623cc05e376a7_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-30.0 + 60.0 * FixedPointNum::random() - 15.0));  p->lastBulletSpeed = (0.4 + 0.2 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_51766b24092e77e160e505c9525c0635_8d84a393f0a201f54e2d94962ff66063); 
  }
}
}
void stepfunc_464baec6fc08d8930d77f47df6b5bf49_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-30.0 + 60.0 * FixedPointNum::random() + 15.0));  p->lastBulletSpeed = (0.4 + 0.2 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_51766b24092e77e160e505c9525c0635_8d84a393f0a201f54e2d94962ff66063); 
  }
}
}
void stepfunc_ae9f735c6401a821cc04ce1cd68278bf_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_e68f86939b654d859e1863a311689f5d_8d84a393f0a201f54e2d94962ff66063(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(-80.0 + 160.0 * FixedPointNum::random()));  p->lastBulletSpeed = (0.4 + 0.2 * FixedPointNum::random());  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_cbd9bfb74268b71570729036043d7ef4_8d84a393f0a201f54e2d94962ff66063); 
  }
}
}


BulletInfo *genBulletFunc_8d84a393f0a201f54e2d94962ff66063(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_2947baafb98b0d493ef68ea80d34a565_8d84a393f0a201f54e2d94962ff66063); 
  }
return bi;}


