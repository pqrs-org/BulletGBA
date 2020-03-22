// XXX uniqID XXX 5aa05dce2cc2c392ac12214081381a73 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/3way-laser.hpp" 

extern const BulletStepFunc bullet_0e9cb1a61061b85c007db56fc11fa063_5aa05dce2cc2c392ac12214081381a73[] = { 
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_5aa05dce2cc2c392ac12214081381a73,
NULL}; 
extern const BulletStepFunc bullet_1f06afe44fe9fc66eb4bef5bfe15894d_5aa05dce2cc2c392ac12214081381a73[] = { 
stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73,
stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73,
stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73,
stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73,
stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_5aa05dce2cc2c392ac12214081381a73,
NULL}; 
void stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_5aa05dce2cc2c392ac12214081381a73(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(3.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_5aa05dce2cc2c392ac12214081381a73(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_11697f4cf8a3fdfad9e846b2dcf785fe_5aa05dce2cc2c392ac12214081381a73(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e9cb1a61061b85c007db56fc11fa063_5aa05dce2cc2c392ac12214081381a73); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e9cb1a61061b85c007db56fc11fa063_5aa05dce2cc2c392ac12214081381a73); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(10.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_0e9cb1a61061b85c007db56fc11fa063_5aa05dce2cc2c392ac12214081381a73); 
  }
}
p->wait = static_cast<u16>(60.0); 
}


BulletInfo *genBulletFunc_5aa05dce2cc2c392ac12214081381a73(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_1f06afe44fe9fc66eb4bef5bfe15894d_5aa05dce2cc2c392ac12214081381a73); 
  }
return bi;}


