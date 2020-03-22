#ifndef BULLET_HPP
#define BULLET_HPP

#include <gba.h>
#include <string.h>
#include "fixed.hpp"
#include "libstack.hpp"
#include "libcommon.hpp"

// define if you need strictly bulletml movement.
#define STRICTLY_BULLETML

class BulletInfo;

typedef void (* BulletStepFunc)(BulletInfo *);
typedef BulletInfo *(* BulletGenerateFunc)(FixedPointNum, FixedPointNum);

enum PixelSizeParams {
  PIXELSIZE_BULLET = 8,
  PIXELSIZE_SELF = 8,
};

// BulletType must be 2^x for (type & (BULLET_TYPE_NORMAL | BULLET_TYPE_EXPLODE))
enum BulletType {
  BULLET_TYPE_HIDDEN =    (1 << 0),
  BULLET_TYPE_EXPLODE =   (1 << 1),
  BULLET_TYPE_BONUS =     (1 << 2),
  BULLET_TYPE_ROOT =      (1 << 3),
  BULLET_TYPE_DIRECTION = (1 << 4),
  BULLET_TYPE_THIN =      (1 << 5),
  BULLET_TYPE_SMALL =     (1 << 6),
  END_OF_BULLET_TYPE =    (1 << 7),
};


class BulletInfo {
public:
  enum Params {
    DEFAULT_ANGLE = FixedPointNum::ANGLENUM * 3 / 4,
    ANGLE_PATTERN_NUM = 16,
  };

  template <bool _isSlowMode>
  void step_doMove(void) {
    if ((roundLife | accelLife) == 0) {
      // use cache
      if (_isSlowMode) {
        posx += roundSpeed_or_motionX >> 2;
        posy += accelSpeed_or_motionY >> 2;
      } else {
        posx += roundSpeed_or_motionX;
        posy += accelSpeed_or_motionY;
      }
    } else {
      if (_isSlowMode) {
        posx += (speed * FixedPointNum::cos(angle)) >> 2;
        posy += (speed * FixedPointNum::sin(angle)) >> 2;
      } else {
        posx += speed * FixedPointNum::cos(angle);
        posy += speed * FixedPointNum::sin(angle);
      }

      if (roundLife > 0) {
        angle += roundSpeed_or_motionX;
        if (isUnionAnglePattern()) {
          setAnglePattern();
        }
        --roundLife;
      }

      if (accelLife > 0) {
        speed += accelSpeed_or_motionY;
        --accelLife;
      }

      setMotionCache();
    }
  }
  void step_doStepFunc() {
    wait -= (wait > 0);
    while ((wait == 0) & (*stepFuncList != NULL)) {
      (*stepFuncList)(this);
      ++stepFuncList;
    }
  }
  void adjustPosToFitScreen(void) {
    int posxInt = posx.toInt();
    int posyInt = posy.toInt();

    if (posxInt < 0) posx = 0;
    if (posyInt < 0) posy = 0;
    if (posxInt > Common::SCREEN_SIZE_X - PIXELSIZE_BULLET)
      posx = Common::SCREEN_SIZE_X - PIXELSIZE_BULLET;
    if (posyInt > Common::SCREEN_SIZE_Y - PIXELSIZE_BULLET)
      posy = Common::SCREEN_SIZE_Y - PIXELSIZE_BULLET;
  }

  void setRound(FixedPointNum roundSpeed, u16 _life) {
    roundSpeed_or_motionX = roundSpeed;
    roundLife = _life;
  }
  void setAccel(FixedPointNum accelSpeed, u16 _life) {
    accelSpeed_or_motionY = accelSpeed;
    accelLife = _life;
  }
  int getAccelLife(void) const { return accelLife; }

  void setAngleAndSpped(FixedPointNum _angle, FixedPointNum _speed) {
    angle = _angle;
    speed = _speed;
    setMotionCache();
    if (isUnionAnglePattern()) {
      setAnglePattern();
    }
  }
  void setSpeed(FixedPointNum _speed) {
    speed = _speed;
    setMotionCache();
  }

  u8 getType(void) const { return type; }
  void setType(int _type) {
    if (_type >= END_OF_BULLET_TYPE) {
      _type = BULLET_TYPE_SMALL;
    }
    type = _type;
    if (isUnionAnglePattern()) {
      setAnglePattern();
    } else {
      counter = 0;
    }
  }

  u8 getLife(void) const { return life; }
  void setLife(int _life) { life = _life; }
  void decreaseLife(void) { life -= (life > 0); }

  int getWait(void) const { return wait; }
  void setWait(int _wait) { wait = _wait; }

  bool isUnionAnglePattern(void) const {
    if (type & (BULLET_TYPE_THIN | BULLET_TYPE_DIRECTION)) {
      return true;
    } else {
      return false;
    }
  }
  u8 getCounter(void) const { return counter; }
  void succCounter(u8 mask) { counter = (counter + 1) & mask; }
  void succCounter(void) { ++counter; }
  u8 getAnglePattern(void) const { return anglePattern; }

  FixedPointNum getPosX() const {return posx;}
  FixedPointNum getPosY() const {return posy;}

  FixedPointNum getAngle(void) const {return angle;}
  FixedPointNum getSpeed(void) const {return speed;}

  void initialize(u8 _type,
                  FixedPointNum _posx, FixedPointNum _posy,
                  FixedPointNum _angle, FixedPointNum _speed,
                  const BulletStepFunc *_stepFuncList) {
    posx = _posx;
    posy = _posy;
    roundLife = 0;
    accelLife = 0;

    angle = _angle;
    speed = _speed;

    lastBulletAngle = _angle;
    lastBulletSpeed = _speed;

    wait = 0;
    stepFuncList = _stepFuncList;

    setType(_type);
    setLife(0);
    setMotionCacheCore();
  }

  void stop(void) {
    //angle = 0;
    speed = 0;
    roundSpeed_or_motionX = 0;
    roundLife = 0;
    accelSpeed_or_motionY = 0;
    accelLife = 0;
  }

  // for ListBullets
  BulletInfo* prevNode;
  BulletInfo* nextNode;

  /// for stepFunc
  const BulletStepFunc *stepFuncList;

  u16 wait;
  FixedPointNum lastBulletAngle;
  FixedPointNum lastBulletSpeed;

private:
  FixedPointNum posx;
  FixedPointNum posy;

  /// for uniform motion
  FixedPointNum angle;
  FixedPointNum speed;

  /// for uniform circlar motion
  FixedPointNum roundSpeed_or_motionX;
  u16 roundLife;

  /// for uniform accelerated motion
  FixedPointNum accelSpeed_or_motionY;
  u8 accelLife;

  u8 type; ///< bullet_type
  union {
    u8 counter;
    u8 anglePattern;
  };
  u8 life;

  void setMotionCache(void) {
    // if roundLife == 0 && accelLife == 0, then set cache.
    if ((roundLife | accelLife) == 0) {
      setMotionCacheCore();
    }
  }

  void setMotionCacheCore(void) {
    roundSpeed_or_motionX = speed * FixedPointNum::cos(angle);
    accelSpeed_or_motionY = speed * FixedPointNum::sin(angle);
  }

  void setAnglePattern(void) {
    const int range = FixedPointNum::ANGLENUM / ANGLE_PATTERN_NUM;
    anglePattern = (static_cast<u32>(angle.toInt() + range / 2) & (FixedPointNum::ANGLENUM - 1)) / ANGLE_PATTERN_NUM;
  }
};


class SelfPos {
public:
  static void setPos(FixedPointNum x, FixedPointNum y) {
    posx = x;
    posy = y;
  }

  static void move(FixedPointNum x, FixedPointNum y) {
    posx += x;
    posy += y;

    if (posx < 0) {
      posx = 0;
    }
    if (posx > FixedPointNum(Common::SCREEN_SIZE_X - PIXELSIZE_SELF)) {
      posx = Common::SCREEN_SIZE_X - PIXELSIZE_SELF;
    }

    if (posy < 0) {
      posy = 0;
    }
    if (posy > FixedPointNum(Common::SCREEN_SIZE_Y - PIXELSIZE_SELF)) {
      posy = Common::SCREEN_SIZE_Y - PIXELSIZE_SELF;
    }
  }

  static FixedPointNum getAngle(BulletInfo *p) {
    return FixedPointNum::atan(posy - p->getPosY(), posx - p->getPosX());
  }

  static FixedPointNum posx;
  static FixedPointNum posy;
};

#include "stepfunc.hpp"

class ListBullets {
public:
  enum {
    MAXNUM = 512,
    ADJUST_WAIT_FOR_STOP_BULLET = 300, // 5 sec
  };
  static Stack<BulletInfo*, MAXNUM> freeInfoStack;

  static BulletInfo bltinfo[MAXNUM];
  static BulletInfo *firstNode;

  static void initialize(void) {
    freeInfoStack.initialize();
    for (int i = 0; i < MAXNUM; ++i) {
      freeInfoStack.push(bltinfo + i);
    }

    memset(bltinfo, 0, sizeof(bltinfo));
    firstNode = NULL;
  }

  static BulletInfo *getFirstItem(void) {
    return firstNode;
  }

  static BulletInfo *iterator(BulletInfo *p) {
    return p->nextNode;
  }

  static BulletInfo *makeNewBullet(void) {
    BulletInfo *p = getNewItemFromStack();
    if (p == NULL) {
      return NULL;
    }

    // ------------------------------------------------------------
    // unshift to nodelist
    p->prevNode = NULL;
    p->nextNode = firstNode;
    if (firstNode != NULL) {
      firstNode->prevNode = p;
    }
    firstNode = p;

    return p;
  }
  static void stepFuncDrop(BulletInfo *p) {
    pushToFreeInfoStack(p);

    if (p->prevNode == NULL) {
      firstNode = p->nextNode;
    } else {
      p->prevNode->nextNode = p->nextNode;
    }
    if (p->nextNode != NULL) {
      p->nextNode->prevNode = p->prevNode;
    }

    p->stepFuncList = StepFunc::nullStepFuncList;
  }

  template <bool _isSlowMode>
  static void doStep(void) {
    for (BulletInfo *p = getFirstItem(); p != NULL; p = iterator(p)) {
      p->step_doMove<_isSlowMode>();

      // check pos valid.
      {
        int posxInt = (p->getPosX()).toInt();
        int posyInt = (p->getPosY()).toInt();

        bool posXValid = static_cast<u32>(posxInt + PIXELSIZE_BULLET) < (Common::SCREEN_SIZE_X + PIXELSIZE_BULLET);
        bool posYValid = static_cast<u32>(posyInt + PIXELSIZE_BULLET) < (Common::SCREEN_SIZE_Y + PIXELSIZE_BULLET);

        if ((posXValid & posYValid) == 0) {
#ifdef STRICTLY_BULLETML
          if (p->getType() & (BULLET_TYPE_ROOT)) {
            p->adjustPosToFitScreen();
          } else {
            ListBullets::stepFuncDrop(p);
            continue;
          }
#else
          ListBullets::stepFuncDrop(p);
          continue;
#endif
        }
      }

#ifdef STRICTLY_BULLETML
      if (p->getSpeed() == 0) {
        if ((*(p->stepFuncList) == NULL) & (p->getAccelLife() == 0)) {
          ListBullets::stepFuncDrop(p);
          continue;
        }
        if (p->getWait() > ADJUST_WAIT_FOR_STOP_BULLET) {
          p->setWait(ADJUST_WAIT_FOR_STOP_BULLET);
        }
      }
#endif
      p->step_doStepFunc();
    }
  }

private:
  static void pushToFreeInfoStack(BulletInfo *p) {
    freeInfoStack.push(p);
  }
  static BulletInfo *getNewItemFromStack(void) {
    if (freeInfoStack.isEmpty()) {
      return NULL;
    } else {
      return freeInfoStack.pop();
    }
  }
};


#endif
