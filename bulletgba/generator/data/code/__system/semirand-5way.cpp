// XXX uniqID XXX 59e73d3d86a5a8adf0eca788979437b3 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/semirand-5way.hpp" 

extern const BulletStepFunc bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3[] = { 
stepfunc_a865c6c8b44585d6739ff7b1938fd90f_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_1692954256c85fc2ec72e7a8de28e52b_59e73d3d86a5a8adf0eca788979437b3,
NULL}; 
extern const BulletStepFunc bullet_2ff6f0c751342e3effd0ca121f507f89_59e73d3d86a5a8adf0eca788979437b3[] = { 
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_59e73d3d86a5a8adf0eca788979437b3,
NULL}; 
extern const BulletStepFunc bullet_e428832a70f8c008f769261aa7852e2b_59e73d3d86a5a8adf0eca788979437b3[] = { 
stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_59e73d3d86a5a8adf0eca788979437b3,
NULL}; 
void stepfunc_d81a7c20da25137d9a56d16914406afb_59e73d3d86a5a8adf0eca788979437b3(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0+5.0*FixedPointNum::random()));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(30.0+5.0*FixedPointNum::random()));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-30.0+5.0*FixedPointNum::random()));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(60.0+5.0*FixedPointNum::random()));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-60.0+5.0*FixedPointNum::random()));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(5.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_59e73d3d86a5a8adf0eca788979437b3(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_a865c6c8b44585d6739ff7b1938fd90f_59e73d3d86a5a8adf0eca788979437b3(BulletInfo *p) { 
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_1692954256c85fc2ec72e7a8de28e52b_59e73d3d86a5a8adf0eca788979437b3(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2ff6f0c751342e3effd0ca121f507f89_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_1b554b08072152aa739c84102ab46022_59e73d3d86a5a8adf0eca788979437b3(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((180.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((180.0-30.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((180.0+30.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((180.0-60.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle((180.0+60.0)));  p->lastBulletSpeed = (1.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3cf65f82758dc68da48afbd88e1a9892_59e73d3d86a5a8adf0eca788979437b3); 
  }
}
p->wait = static_cast<u16>(60.0); 
}


BulletInfo *genBulletFunc_59e73d3d86a5a8adf0eca788979437b3(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_e428832a70f8c008f769261aa7852e2b_59e73d3d86a5a8adf0eca788979437b3); 
  }
return bi;}


