// XXX uniqID XXX 1a304451e9f5b6981a3a289f05ad7d53 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/3way-spear.hpp" 

extern const BulletStepFunc bullet_60830a69f8fe3e53e76d274f0ccdffa4_1a304451e9f5b6981a3a289f05ad7d53[] = { 
stepfunc_ac0d0e641fb194c2a449ff523cee7622_1a304451e9f5b6981a3a289f05ad7d53,
NULL}; 
extern const BulletStepFunc bullet_6c6849295b4f134e911daea2eccac920_1a304451e9f5b6981a3a289f05ad7d53[] = { 
stepfunc_a865c6c8b44585d6739ff7b1938fd90f_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_1a304451e9f5b6981a3a289f05ad7d53,
NULL}; 
extern const BulletStepFunc bullet_3d5cd6b5e553ede82684f1ca1053fcb6_1a304451e9f5b6981a3a289f05ad7d53[] = { 
stepfunc_d7369223d6113d21e60a25b914a3a463_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_549c9dac6d9b3af95894b1e425e83835_1a304451e9f5b6981a3a289f05ad7d53,
NULL}; 
extern const BulletStepFunc bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53[] = { 
stepfunc_8fff89501dcb48caade16bb16deb7b61_1a304451e9f5b6981a3a289f05ad7d53,
stepfunc_6c88a51082ed4fd2337504d13a7f1d2c_1a304451e9f5b6981a3a289f05ad7d53,
NULL}; 
extern const BulletStepFunc bullet_c77cbfd63b68da14e353793990634572_1a304451e9f5b6981a3a289f05ad7d53[] = { 
stepfunc_823f7b3450e0e8504ce088c0ec71d964_1a304451e9f5b6981a3a289f05ad7d53,
NULL}; 
void stepfunc_8fff89501dcb48caade16bb16deb7b61_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_6c88a51082ed4fd2337504d13a7f1d2c_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(40.0);  FixedPointNum speed = 0.2;p->setAccel(speed, life);}
}
void stepfunc_d7369223d6113d21e60a25b914a3a463_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_549c9dac6d9b3af95894b1e425e83835_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.4);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.4);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1593d19d32321a06536c08f543ee2db8_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_1b68e52c2b12f9ce74100c41de50b176_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(36.0));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_3d5cd6b5e553ede82684f1ca1053fcb6_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
}
void stepfunc_a865c6c8b44585d6739ff7b1938fd90f_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_ac0d0e641fb194c2a449ff523cee7622_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_6c6849295b4f134e911daea2eccac920_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-10.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_6c6849295b4f134e911daea2eccac920_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(10.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_6c6849295b4f134e911daea2eccac920_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_823f7b3450e0e8504ce088c0ec71d964_1a304451e9f5b6981a3a289f05ad7d53(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(5.0-10.0*FixedPointNum::random())));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_60830a69f8fe3e53e76d274f0ccdffa4_1a304451e9f5b6981a3a289f05ad7d53); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_1a304451e9f5b6981a3a289f05ad7d53(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_c77cbfd63b68da14e353793990634572_1a304451e9f5b6981a3a289f05ad7d53); 
  }
return bi;}


