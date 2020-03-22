// XXX uniqID XXX bb7206d81d7903d0a47b98acd1edb8ab XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "bulletsmorph/aba_7.hpp" 

extern const BulletStepFunc bullet_7954be327fd56d04b0e5e40eee8f13a6_bb7206d81d7903d0a47b98acd1edb8ab[] = { 
stepfunc_3d96ffb925ca1ff7d71ef8155601f8ca_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_80a3f3ce269b3654325f8ae9ddf44581_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_bb7206d81d7903d0a47b98acd1edb8ab,
NULL}; 
extern const BulletStepFunc bullet_a429745494ad6ec16e7da75df794178a_bb7206d81d7903d0a47b98acd1edb8ab[] = { 
stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_13a9dc4eca9c93b68a76b64c5ede90d0_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_56980be7a17bf9ac5b57ce4c1741d81b_bb7206d81d7903d0a47b98acd1edb8ab,
NULL}; 
extern const BulletStepFunc bullet_6b80c89615d074fe41a23ed6173d333b_bb7206d81d7903d0a47b98acd1edb8ab[] = { 
stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_833dc7729b47c087f85b774ce2c1f890_bb7206d81d7903d0a47b98acd1edb8ab,
NULL}; 
extern const BulletStepFunc bullet_ba856a9ed17a7569addd94ca12fee8d2_bb7206d81d7903d0a47b98acd1edb8ab[] = { 
stepfunc_e06e1b181d60d055f4ea764229c2dbcd_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_8a90fbb388a2f428014ad33edad90b06_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_e06e1b181d60d055f4ea764229c2dbcd_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_8a90fbb388a2f428014ad33edad90b06_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_e06e1b181d60d055f4ea764229c2dbcd_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_8a90fbb388a2f428014ad33edad90b06_bb7206d81d7903d0a47b98acd1edb8ab,
stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_bb7206d81d7903d0a47b98acd1edb8ab,
NULL}; 
void stepfunc_d63f935eaeadb4a3f83557ae10cc6a28_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
p->wait = static_cast<u16>(20.0); 
}
void stepfunc_833dc7729b47c087f85b774ce2c1f890_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(60.0);  FixedPointNum speed = FixedPointNum(0.3 - p->getSpeed(), life);p->setAccel(speed, life);}
}
void stepfunc_cb47d0400bbea534b100974d792e3f8f_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_6b80c89615d074fe41a23ed6173d333b_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
}
void stepfunc_13a9dc4eca9c93b68a76b64c5ede90d0_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = p->getSpeed() + (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_6b80c89615d074fe41a23ed6173d333b_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
}
void stepfunc_56980be7a17bf9ac5b57ce4c1741d81b_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(1.0);  FixedPointNum speed = SelfPos::getAngle(p) + (FixedPointNum::degree2angle((30.0 - 20.0 * 1.0) * (-1.0 + 2.0 * FixedPointNum::random()))) - p->getAngle();p->setRound(speed, life);}
{
  u16 life = static_cast<u16>(300.0);  FixedPointNum speed = FixedPointNum(p->getSpeed() + 2.0 + 2.0 * 1.0, life);p->setAccel(speed, life);}
}
void stepfunc_caa19af4a0c498de1b91b3339d619e2c_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(8.0));  p->lastBulletSpeed = p->lastBulletSpeed + (0.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a429745494ad6ec16e7da75df794178a_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
}
void stepfunc_3d96ffb925ca1ff7d71ef8155601f8ca_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_80a3f3ce269b3654325f8ae9ddf44581_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(-32.0));  p->lastBulletSpeed = (1.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_a429745494ad6ec16e7da75df794178a_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
}
void stepfunc_9a262eab9bee9a27b0f4b6d72eb6d017_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_e06e1b181d60d055f4ea764229c2dbcd_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(90.0));  p->lastBulletSpeed = (1.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_7954be327fd56d04b0e5e40eee8f13a6_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_8a90fbb388a2f428014ad33edad90b06_bb7206d81d7903d0a47b98acd1edb8ab(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(-90.0));  p->lastBulletSpeed = (1.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_7954be327fd56d04b0e5e40eee8f13a6_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
}
p->wait = static_cast<u16>(60.0); 
}


BulletInfo *genBulletFunc_bb7206d81d7903d0a47b98acd1edb8ab(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_ba856a9ed17a7569addd94ca12fee8d2_bb7206d81d7903d0a47b98acd1edb8ab); 
  }
return bi;}


