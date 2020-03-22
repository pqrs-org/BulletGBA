#ifndef SELF_HPP
#define SELF_HPP

#include "gameparams.hpp"
#include "bullet.hpp"

class Self {
public:
  enum {
    NO_HIT_CHECK_TIME = 128,
    MAX_MISS_COUNT = 99,

    NO_FIRE_TIME = NO_HIT_CHECK_TIME / 2,
  };

  static const int getSelfPosCenterX(void) { return SelfPos::posx.toInt() + ImageHandler::OBJPIXEL_WIDTH_SELF / 2; }
  static const int getSelfPosCenterY(void) { return SelfPos::posy.toInt() + ImageHandler::OBJPIXEL_HEIGHT_SELF / 2; }

  static void initialize(void) {
    effectExplode.initialize();
    noHitCheckTime = 0;
    missCount = 0;
  }

  static void step(u16 keysHeld) {
    if (effectExplode.isAlive()) {
      effectExplode.step();
    } else {
      move(keysHeld);
      draw();
      noHitCheckTime -= noHitCheckTime > 0;
    }
  }

  static void hitCheck(BulletInfo *p) {
    if (SelfPos::posx.toInt() == p->getPosX().toInt()) {
      const int posy = SelfPos::posy.toInt();
      const int range = 1;
      const int minPosY = p->getPosY().toInt() - range;
      if (static_cast<u32>(posy - minPosY) < static_cast<u32>(range * 2)) {
        miss();
      }
    }
  }

  static bool miss(void) {
    if (noHitCheckTime > 0) {
      return false;
    }
    noHitCheckTime = NO_HIT_CHECK_TIME;
    missCount += (missCount < MAX_MISS_COUNT);
    GameParams::lifeFrame.miss();

    const int posx = SelfPos::posx.toInt() + (ImageHandler::OBJPIXEL_WIDTH_SELF / 2 - effectExplode.getWidth() / 2);
    const int posy = SelfPos::posy.toInt() + (ImageHandler::OBJPIXEL_HEIGHT_SELF / 2 - effectExplode.getHeight() / 2);
    effectExplode.setup(posx, posy);
    return true;
  }

  static bool isNoFireTime(void) {
    return noHitCheckTime > NO_FIRE_TIME;
  }

  static int getMissCount(void) {
    return missCount;
  }

  static bool isMissJustNow(void) {
    return effectExplode.isFirstFrame();
  }

  static bool isExplode(void) {
    return effectExplode.isAlive();
  }

private:
  static void move(u16 keysHeld) {
    FixedPointNum movex = 0;
    FixedPointNum movey = 0;

    FixedPointNum moveDistance;
    moveDistance = FixedPointNum(3, 2);

    if (keysHeld & KEY_DOWN) {
      movey = moveDistance;
    }
    if (keysHeld & KEY_UP) {
      movey = - moveDistance;
    }
    if (keysHeld & KEY_RIGHT) {
      movex = moveDistance;
    }
    if (keysHeld & KEY_LEFT) {
      movex = - moveDistance;
    }
    SelfPos::move(movex, movey);
  }

  static void draw() {
    OBJATTR * const p = OAM + GameParams::OAM_INDEX_SELF;

    p->attr0 = (SelfPos::posy.toInt() & 0xff);
    p->attr1 = (SelfPos::posx.toInt() & 0x1ff);

    if ((noHitCheckTime & 0x3) == 0) {
      p->attr2 = OBJ_PALETTE(ImageHandler::OBJCOLOR_SELF) | OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
        ImageResource::getTileIndex<ImageResource::SPR_SELF>::value;
    } else {
      p->attr2 = OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
        ImageResource::getTileIndex<ImageResource::SPR_TRANSPARENT>::value;
    }
  }

  // ----------------------------------------------------------------------
  static GameParams::EffectExplode effectExplode;

  static int noHitCheckTime;
  static int missCount;
};

#endif
