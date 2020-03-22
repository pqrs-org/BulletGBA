#ifndef JEWEL_HPP
#define JEWEL_HPP

class JewelInfo {
public:
  enum Params {
    MAXNUM = 400,
    LIFERECOVER_WAIT = 200,
    LIFEDECREASE_WHEN_CANCEL = 40,
  };

  void initialize(void) {
    slowModeFlag = false;
    infinityFlag = false;
    resetLife();
    lifeRecoverWait = 0;
  }

  void enable(void) {
    if (life > 0) {
      slowModeFlag = true;
    }
  }

  void setInfinityFlag(bool flag) {
    infinityFlag = flag;
  }

  void cancel(void) {
    slowModeFlag = false;
    lifeRecoverWait = LIFERECOVER_WAIT;
    decreaseLife(LIFEDECREASE_WHEN_CANCEL);
  }

  void step(void) {
    if (slowModeFlag) {
      if (life > 0) {
        decreaseLife(2);
      } else {
        cancel();
      }
    } else {
      if (lifeRecoverWait > 0) {
        --lifeRecoverWait;
      } else {
        life += (life < MAXNUM);
      }
    }
    draw();
  }

  void resetLife(void) {
    life = MAXNUM;
  }

  void draw(void) {
    if (infinityFlag) {
      ImageHandler::drawBGStatusJewelInfinity();
    } else {
      ImageHandler::drawOpacityNumber<3>(29, 4, life, ImageHandler::BGCOLOR_FONT_RED + (life > 0));
    }
  }

  bool isSlowMode(void) const { return slowModeFlag; }

private:
  void decreaseLife(int val) {
    if (! infinityFlag) {
      life -= val;
      if (life < 0) {
        life = 0;
      }
    }
  }

  s32 life;
  s32 lifeRecoverWait;
  bool slowModeFlag;
  bool infinityFlag;
};

#endif
