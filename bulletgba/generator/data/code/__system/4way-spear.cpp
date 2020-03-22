// XXX uniqID XXX a29878a9f000d9afc725914ddc66af61 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "__system/4way-spear.hpp" 

extern const BulletStepFunc bullet_b35eba35319f25c2090d1b7562c0eae5_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_807988159994af4a58d02a734cc835e2_a29878a9f000d9afc725914ddc66af61,
NULL}; 
extern const BulletStepFunc bullet_1c24a118f365e22721531595eb149ae9_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_a865c6c8b44585d6739ff7b1938fd90f_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_a29878a9f000d9afc725914ddc66af61,
NULL}; 
extern const BulletStepFunc bullet_40db37990669443107129bce1cae7ed6_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_d7369223d6113d21e60a25b914a3a463_a29878a9f000d9afc725914ddc66af61,
stepfunc_b591b94e535b5a3f83724bc913d71a3d_a29878a9f000d9afc725914ddc66af61,
NULL}; 
extern const BulletStepFunc bullet_789b996aec3be4ff76605a0e44dfeefa_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_9ca052d45796e9b0a99ad8fbf43cbfed_a29878a9f000d9afc725914ddc66af61,
NULL}; 
extern const BulletStepFunc bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_8fff89501dcb48caade16bb16deb7b61_a29878a9f000d9afc725914ddc66af61,
stepfunc_6c88a51082ed4fd2337504d13a7f1d2c_a29878a9f000d9afc725914ddc66af61,
NULL}; 
extern const BulletStepFunc bullet_89db955d4b3ec22c2beb1a26f94606fb_a29878a9f000d9afc725914ddc66af61[] = { 
stepfunc_20d85b5c8ef0817f3e1c3e78fd0f611d_a29878a9f000d9afc725914ddc66af61,
stepfunc_20d85b5c8ef0817f3e1c3e78fd0f611d_a29878a9f000d9afc725914ddc66af61,
stepfunc_dae2cf81747ffb5070f05c8837b1d568_a29878a9f000d9afc725914ddc66af61,
NULL}; 
void stepfunc_8fff89501dcb48caade16bb16deb7b61_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
p->wait = static_cast<u16>(60.0); 
}
void stepfunc_6c88a51082ed4fd2337504d13a7f1d2c_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(40.0);  FixedPointNum speed = 0.2;p->setAccel(speed, life);}
}
void stepfunc_9ca052d45796e9b0a99ad8fbf43cbfed_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.4);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.2);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.3);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.4);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(180.0));  p->lastBulletSpeed = (0.5);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_2e4d0918e7607243fe91a1ccbd16f424_a29878a9f000d9afc725914ddc66af61); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_d7369223d6113d21e60a25b914a3a463_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
p->wait = static_cast<u16>(2.0); 
}
void stepfunc_b591b94e535b5a3f83724bc913d71a3d_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_DIRECTION, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_789b996aec3be4ff76605a0e44dfeefa_a29878a9f000d9afc725914ddc66af61); 
  }
}
}
void stepfunc_ef7cf1216681900daf50558616d96869_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(36.0));  p->lastBulletSpeed = (4.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_40db37990669443107129bce1cae7ed6_a29878a9f000d9afc725914ddc66af61); 
  }
}
}
void stepfunc_a865c6c8b44585d6739ff7b1938fd90f_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
p->wait = static_cast<u16>(30.0); 
}
void stepfunc_dae2cf81747ffb5070f05c8837b1d568_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
ListBullets::stepFuncDrop(p);}
void stepfunc_807988159994af4a58d02a734cc835e2_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(5.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1c24a118f365e22721531595eb149ae9_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(15.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1c24a118f365e22721531595eb149ae9_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-5.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1c24a118f365e22721531595eb149ae9_a29878a9f000d9afc725914ddc66af61); 
  }
}
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->getAngle() + (FixedPointNum::degree2angle(-15.0));  p->lastBulletSpeed = (3.0);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1c24a118f365e22721531595eb149ae9_a29878a9f000d9afc725914ddc66af61); 
  }
}
ListBullets::stepFuncDrop(p);}
void stepfunc_20d85b5c8ef0817f3e1c3e78fd0f611d_a29878a9f000d9afc725914ddc66af61(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = SelfPos::getAngle(p) + (FixedPointNum::degree2angle(0.0+(5.0-10.0*FixedPointNum::random())));  p->lastBulletSpeed = (0.1);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_SMALL, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_b35eba35319f25c2090d1b7562c0eae5_a29878a9f000d9afc725914ddc66af61); 
  }
}
p->wait = static_cast<u16>(120.0); 
}


BulletInfo *genBulletFunc_a29878a9f000d9afc725914ddc66af61(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_89db955d4b3ec22c2beb1a26f94606fb_a29878a9f000d9afc725914ddc66af61); 
  }
return bi;}


