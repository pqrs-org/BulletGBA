#ifndef STEPFUNC_HPP
#define STEPFUNC_HPP

class StepFunc {
public:
  static const BulletStepFunc nullStepFuncList[];
  static const BulletStepFunc effectHitStepFuncList[];

  template <int _speed>
  static void setSpeed(BulletInfo *p) {
    p->setSpeed(_speed);
  }

  static void stop(BulletInfo *p) {
    p->stop();
  }

  template <int _wait> static void effectHit(BulletInfo *p) {
    p->setType(BULLET_TYPE_EXPLODE);
    p->wait = _wait;
  }

  template<int _wait> static void wait(BulletInfo *p) {
    p->wait = _wait;
  }
};


#endif
