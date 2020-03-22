// XXX uniqID XXX db8e96aa559de2f53dae5738a1a81320 XXX 

#include <gba_types.h>
#include "bullet.hpp"
#include "fixed.hpp"


#include "esp_galuda_lt/esp_galuda_lt_stage2_middle_boss_4fan.hpp" 

extern const BulletStepFunc bullet_1f104212f44631952ac7afd40737f24b_db8e96aa559de2f53dae5738a1a81320[] = { 
stepfunc_d522e9821d671f900ecae16cfae138ff_db8e96aa559de2f53dae5738a1a81320,
stepfunc_a65a51f1c435cb5883365d15e79ddb66_db8e96aa559de2f53dae5738a1a81320,
NULL}; 
extern const BulletStepFunc bullet_3a5c90333ab0c7d5303f40cad579f907_db8e96aa559de2f53dae5738a1a81320[] = { 
stepfunc_6a3d3af7b320749293d535684eea24db_db8e96aa559de2f53dae5738a1a81320,
stepfunc_e1f16364f956a46ce7b99e633988a764_db8e96aa559de2f53dae5738a1a81320,
stepfunc_2ec378e5908000594275f2e0093aa057_db8e96aa559de2f53dae5738a1a81320,
stepfunc_2bbc1024ee0a068bffc4b14a47cb2449_db8e96aa559de2f53dae5738a1a81320,
NULL}; 
void stepfunc_539a1dac06460cf848228f93a34d2ec0_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(
2.0
));  p->lastBulletSpeed = p->lastBulletSpeed + (
0.12
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
}
void stepfunc_8497935c4384429ef43ac1225001bcd6_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = p->lastBulletAngle + (FixedPointNum::degree2angle(
6.0
));  p->lastBulletSpeed = (
1.2+1.0*0.4
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, StepFunc::nullStepFuncList); 
  }
}
for (u32 i = 0; i < 3; ++i) { 
stepfunc_539a1dac06460cf848228f93a34d2ec0_db8e96aa559de2f53dae5738a1a81320(p);}
}
void stepfunc_d522e9821d671f900ecae16cfae138ff_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{
  u16 life = static_cast<u16>(
10.0
);  FixedPointNum speed = FixedPointNum(
0.0
 - p->getSpeed(), life);p->setAccel(speed, life);}
p->wait = static_cast<u16>(
10.0
); 
}
void stepfunc_a65a51f1c435cb5883365d15e79ddb66_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
for (u32 i = 0; i < 40; ++i) { 
stepfunc_8497935c4384429ef43ac1225001bcd6_db8e96aa559de2f53dae5738a1a81320(p);}
ListBullets::stepFuncDrop(p);}
void stepfunc_6a3d3af7b320749293d535684eea24db_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(
135.0
));  p->lastBulletSpeed = (
11.6
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1f104212f44631952ac7afd40737f24b_db8e96aa559de2f53dae5738a1a81320); 
  }
}
p->wait = static_cast<u16>(
15.0-1.0*10.0
); 
}
void stepfunc_e1f16364f956a46ce7b99e633988a764_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(
90.0
));  p->lastBulletSpeed = (
8.0
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1f104212f44631952ac7afd40737f24b_db8e96aa559de2f53dae5738a1a81320); 
  }
}
p->wait = static_cast<u16>(
15.0-1.0*10.0
); 
}
void stepfunc_2ec378e5908000594275f2e0093aa057_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(
-90.0
));  p->lastBulletSpeed = (
8.0
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1f104212f44631952ac7afd40737f24b_db8e96aa559de2f53dae5738a1a81320); 
  }
}
p->wait = static_cast<u16>(
15.0-1.0*10.0
); 
}
void stepfunc_2bbc1024ee0a068bffc4b14a47cb2449_db8e96aa559de2f53dae5738a1a81320(BulletInfo *p) { 
{ 
  BulletInfo *bi;  p->lastBulletAngle = (FixedPointNum::degree2angle(
-135.0
));  p->lastBulletSpeed = (
11.6
);  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(p->getType() << 1, p->getPosX(), p->getPosY(), p->lastBulletAngle, p->lastBulletSpeed, bullet_1f104212f44631952ac7afd40737f24b_db8e96aa559de2f53dae5738a1a81320); 
  }
}
ListBullets::stepFuncDrop(p);}


BulletInfo *genBulletFunc_db8e96aa559de2f53dae5738a1a81320(FixedPointNum posx, FixedPointNum posy) {  BulletInfo * bi;  bi = ListBullets::makeNewBullet();  if (bi != NULL) {    bi->initialize(BULLET_TYPE_ROOT, posx, posy, BulletInfo::DEFAULT_ANGLE, 0, bullet_3a5c90333ab0c7d5303f40cad579f907_db8e96aa559de2f53dae5738a1a81320); 
  }
return bi;}


