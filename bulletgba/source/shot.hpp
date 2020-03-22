#ifndef SHOT_HPP
#define SHOT_HPP

#include "self.hpp"
#include "gameparams.hpp"

class ShotInfo {
public:
  enum {
    SHOT_SPEED = 6,
    SHOT_LIFE = 50,
  };

  void initialize(int _index) {
    posx = 0;
    posy = Common::SCREEN_SIZE_Y;
    index = _index;
    life = 0;
  }

  void fire(int _shotType) {
    posx = SelfPos::posx.toInt() + ImageHandler::OBJPIXEL_WIDTH_SELF / 2 - ImageHandler::OBJPIXEL_WIDTH_SHOT / 2;;
    posy = SelfPos::posy.toInt() - ImageHandler::OBJPIXEL_WIDTH_SHOT / 2;
    life = SHOT_LIFE;
    shotType = _shotType;
  }

  void move(void) {
    posx += SHOT_SPEED;
  }

  void drop(void) {
    OBJATTR * const p = OAM + GameParams::OAM_INDEX_SHOT + index;
    p->attr0 = Common::SCREEN_SIZE_Y;
  }

  void draw(void) {
    OBJATTR * const p = OAM + GameParams::OAM_INDEX_SHOT + index;
    p->attr0 = posy & 0xff;
    p->attr1 = (posx & 0x1ff) | OBJ_SIZE(Sprite_32x32);
    p->attr2 = OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
      OBJ_PALETTE(ImageHandler::OBJCOLOR_SHOT) | shotType;
  }

  int getPosX(void) const { return posx; }
  int getPosY(void) const { return posy; }
  int getIndex(void) const { return index; }
  int getLife(void) const { return life; }
  void decreaseLife(int num) { life -= num; }

private:
  int posx;
  int posy;

  int index;
  int life;

  int shotType;
};


class ListShot {
public:
  enum {
    SHOT_AUTOFIRE_WAIT = 4,
  };

  void initialize(void) {
    autoShotWait = 0;
    autoFireFlag = false;

    stackFreeShot.initialize();
    ShotInfo *p = shot;
    for (int i = 0; i < GameParams::MAX_SHOT; ++i) {
      p->initialize(i);
      dropShot(i);
      ++p;
    }
  }

  void dropShot(int index) {
    ShotInfo *p = shot + index;

    stackFreeShot.push(p);
    p->drop();
    enableFlag[index] = false;
  }

  void dropShot(ShotInfo *p) {
    dropShot(p->getIndex());
  }

  ShotInfo *getShot(int index) {
    return shot + index;
  }

  int isEnable(int index) {
    return enableFlag[index];
  }

  // store listshot-posx-range to minPosX & maxPosX.
  void step(int *minPosY, int *maxPosY) {
    autoFire();

    int min = Common::SCREEN_SIZE_X;
    int max = 0;
    for (int i = 0; i < GameParams::MAX_SHOT; ++i) {
      ShotInfo *p = getShot(i);

      if (! isEnable(i)) {
        continue;
      }

      p->move();
      p->draw();

      if (min > p->getPosY()) {
        min = p->getPosY();
      }
      if (max < p->getPosY()) {
        max = p->getPosY();
      }
    }

    *minPosY = min;
    *maxPosY = max;
  }

  void setAutoFireFlag(bool flag) { autoFireFlag = flag; }

private:
  void autoFire(void) {
    if (autoShotWait == 0) {
      if (autoFireFlag) {
        autoShotWait = SHOT_AUTOFIRE_WAIT;
        if (! stackFreeShot.isEmpty()) {
          ShotInfo *p = stackFreeShot.pop();

          int posy = Self::getSelfPosCenterY();
          int hitFlag = 0;
          if (GameParams::bossBody.isBossEnabled()) {
            hitFlag = GameParams::bossCore.isHitY(posy);
          }
          p->fire(ImageResource::getTileIndex<ImageResource::SPR_SHOT>::value +
                  hitFlag * (TILEINFO_spr_shot::size / ImageHandler::OBJTILE_SHOT_PATTERN));
          enableFlag[p->getIndex()] = true;
        }
      }
    } else {
      --autoShotWait;
    }
  }

  ShotInfo shot[GameParams::MAX_SHOT];
  Stack<ShotInfo*, GameParams::MAX_SHOT> stackFreeShot;
  bool enableFlag[GameParams::MAX_SHOT];
  int autoShotWait;
  bool autoFireFlag;
};

#endif
