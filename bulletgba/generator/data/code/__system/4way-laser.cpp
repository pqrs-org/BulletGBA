// XXX uniqID XXX 7c6655bebc9a111adf68b9a30f1acbec XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/4way-laser.hpp" 

extern const BulletStepFunc bullet_d5b2e778ca00266286ca3397f626c152_7c6655bebc9a111adf68b9a30f1acbec[] = { 
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_7c6655bebc9a111adf68b9a30f1acbec,
NULL}; 
extern const BulletStepFunc bullet_3eea4bf04ca2980a74fe15371aec9499_7c6655bebc9a111adf68b9a30f1acbec[] = { 
stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_7c6655bebc9a111adf68b9a30f1acbec,
NULL}; 
void stepfunc_bbf4d4d1a84fe518316ecf2f20d6a516_7c6655bebc9a111adf68b9a30f1acbec(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (2.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
p->wait = static_cast<u16>(3.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_7c6655bebc9a111adf68b9a30f1acbec(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_d65ebf4cee4515cbcea61ae731fe3c30_7c6655bebc9a111adf68b9a30f1acbec(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_d5b2e778ca00266286ca3397f626c152_7c6655bebc9a111adf68b9a30f1acbec); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_d5b2e778ca00266286ca3397f626c152_7c6655bebc9a111adf68b9a30f1acbec); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-5.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_d5b2e778ca00266286ca3397f626c152_7c6655bebc9a111adf68b9a30f1acbec); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-15.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_d5b2e778ca00266286ca3397f626c152_7c6655bebc9a111adf68b9a30f1acbec); 
  }
}
p->wait = static_cast<u16>(60.0); 
}


BulletInfo *genBulletFunc_7c6655bebc9a111adf68b9a30f1acbec(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_3eea4bf04ca2980a74fe15371aec9499_7c6655bebc9a111adf68b9a30f1acbec); 
  }
return bi;}


