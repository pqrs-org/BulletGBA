// XXX uniqID XXX 3528e8f234f007f59f5a71e955c85626 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "original/dokkaan.hpp" 

extern const BulletStepFunc bullet_ee4cc196be4148a2222dc7e0633d6e4c_3528e8f234f007f59f5a71e955c85626[] = { 
stepfunc_7d5ccfecf133ce66149bd6572cc29b9d_3528e8f234f007f59f5a71e955c85626,
NULL}; 
void stepfunc_0329b7d9c5092f66b697afa9489fe7f5_3528e8f234f007f59f5a71e955c85626(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(120.0*FixedPointNum::random()-60.0));  p->lastBulletSpeed = (0.5+FixedPointNum::random()*2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_7d5ccfecf133ce66149bd6572cc29b9d_3528e8f234f007f59f5a71e955c85626(BulletInfo *p) { 
for (u32 i = 0; i < 400; ++i) { 
stepfunc_0329b7d9c5092f66b697afa9489fe7f5_3528e8f234f007f59f5a71e955c85626(p);}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_3528e8f234f007f59f5a71e955c85626(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ee4cc196be4148a2222dc7e0633d6e4c_3528e8f234f007f59f5a71e955c85626); 
  }
return bi;}


