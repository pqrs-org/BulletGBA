#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include "gameparams.hpp"
#include "self.hpp"
#include "shot.hpp"
#include "bullet.hpp"
#include "jewel.hpp"
#include "imagehandler.hpp"
#include "spritedoubler.hpp"
#include "soundhandler.hpp"
#include "replay.hpp"
#include "main.hpp"

#include "libgbakey.hpp"
#include "libplaytime.hpp"
#include "libkeylog.hpp"

#include "menu_title.hpp"
#include "menu_list.hpp"
#include "menu_credits.hpp"
#include "menu_replaylist.hpp"

extern const BulletStepFunc * const callingvectorList[];
extern const int callingvectorSizeList[];
extern const unsigned int callingvectorListSize;

class GameEngine {
public:
  static const PlayTime &getPlayTime(void) { return playTime; }
  static Replay &getReplay(void) { return replay; }
  static void doMainMenu(void);

  enum Params {
    DEFAULT_BULLET_POSX = 200 - ImageHandler::OBJPIXEL_WIDTH_BULLET / 2,
    DEFAULT_BULLET_POSY = 80 - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2,
  };

  static void bulletInitialize(void);
  static void showResult(bool isClear);
  static void setExitLoopFlag(void) {
    isExitLoop = true;
  }
  static void setInvincibleTime(int time) { invincibleTime = time; }
  static void setSoundShotHitFlag(void) { soundShotHitFlag = true; }
  static void setSoundExplodeBossShieldFlag(void) { soundExplodeBossShieldFlag = true; }
  static void setSoundToggleSlowModeFlag(void) { soundToggleSlowModeFlag = true; }
  static void succStage(void) { ++stage; }
  static int getStage(void) { return stage; }
  static bool isViewReplayMode(void) { return isViewReplay; }
  static JewelInfo& getJewelInfo(void) { return jewelInfo; }

  // --------------------------------------------------
  template <bool _isReplayTarget, void (*_initializeFunc)(void), void (*_nextBulletFunc)(void), void (*_extraFunc)(void)>
  static bool doLoop(void) {
    bool isCanceled = false;

    loop_initialize();
    _initializeFunc();

    if (_isReplayTarget) {
      if (isViewReplay) {
        ImageHandler::drawBGReplay();
      }
    }

    isExitLoop = false;
    VBlankIntrWait();
    SpriteDoubler::resetFrameSkipCount();

    for (;;) {
      if (ListBullets::getFirstItem() == NULL) {
        _nextBulletFunc();
      }

      soundShotHitFlag = false;
      soundExplodeBossShieldFlag = false;
      soundToggleSlowModeFlag = false;

      //------------------------------------------------------------
      u16 keysDown;
      u16 keysHeld;

      if (_isReplayTarget) {
        u16 pressKeyBit = GBAKey::getPressKeyBit_REG_KEYINPUT();

        if (isViewReplay) {
          u16 replayKeyBit = replay.keyLog.shift();
          GBAKey::scanKeys(replayKeyBit);

          keysDown = GBAKey::getKeysDown() | (pressKeyBit & KEY_B);
          keysHeld = GBAKey::getKeysHeld();
        } else {
          replay.keyLog.push(pressKeyBit);
          GBAKey::scanKeys(pressKeyBit);

          keysDown = GBAKey::getKeysDown();
          keysHeld = GBAKey::getKeysHeld();
        }
      } else {
        GBAKey::scanKeys();
        keysDown = GBAKey::getKeysDown();
        keysHeld = GBAKey::getKeysHeld();
      }

      Self::step(keysHeld);
      if (! Self::isNoFireTime()) {
        listShot.setAutoFireFlag(true);
      } else {
        listShot.setAutoFireFlag(false);
      }

      // ------------------------------------------------------------
      if (keysDown & KEY_B) {
        isExitLoop = true;
        isCanceled = true;
      }

      if (keysDown & KEY_R) {
        _nextBulletFunc();
      }
      if (keysDown & (KEY_START | KEY_SELECT)) {
        bool tmpSlowMode = jewelInfo.isSlowMode();
        if (jewelInfo.isSlowMode()) {
          jewelInfo.cancel();
        } else {
          jewelInfo.enable();
        }
        if (tmpSlowMode != jewelInfo.isSlowMode()) {
          soundToggleSlowModeFlag = true;
        }
      }
      jewelInfo.step();

      _extraFunc();

      //------------------------------------------------------------
      if (jewelInfo.isSlowMode()) {
        ListBullets::doStep<true>();
      } else {
        ListBullets::doStep<false>();
      }
      compileBullet();
      if (invincibleTime > 0) {
        --invincibleTime;
      } else {
        hitCheck();
      }

      playTime.succFrame();

      SpriteDoubler::setCompileDone();

      playSE();

      VBlankIntrWait();

      if (isExitLoop) {
        bulletInitialize();
        break;
      }
    }

    loop_terminate();

    return ! isCanceled;
  }

  // ============================================================
  static void drawBulletsNum(void) {
    ImageHandler::drawOpacityNumber<3>(28, 17, ListBullets::MAXNUM - ListBullets::freeInfoStack.getSize(), ImageHandler::BGCOLOR_FONT_WHITE);
  }
  static void drawMissCount(void) {
    ImageHandler::drawOpacityNumber<2>(29, 18, Self::getMissCount(), ImageHandler::BGCOLOR_FONT_WHITE + isHit);
  }
  static void drawPlayTime(void) {
    ImageHandler::drawOpacityNumber<1>(29, 13, playTime.getMin(), ImageHandler::BGCOLOR_FONT_WHITE);
    ImageHandler::drawOpacityNumber<2>(29, 15, playTime.getSec(), ImageHandler::BGCOLOR_FONT_WHITE);
    ImageHandler::drawOpacityNumber<2>(29, 18, playTime.getMilliSec(), ImageHandler::BGCOLOR_FONT_WHITE);
  }
  static void drawFrameSkipCount(void) {
#if 0
    // draw frameSkip for debug
    ImageHandler::drawOpacityNumber<3>(27, 4, SpriteDoubler::getFrameSkipCount(), ImageHandler::BGCOLOR_FONT_WHITE);
#endif
  }

  static ListShot listShot;

private:
  static void loop_initialize(void);

  static void loop_terminate(void);

  static void compileBullet(void);
  static void hitCheck(void);

  static void irq_vblank() {
    // bg scroll
    static int bgoffset = 0;
    bgoffset = (bgoffset + 2 - jewelInfo.isSlowMode()) & 0xf;
    BG3HOFS = (bgoffset / 2);

    SpriteDoubler::irq_vblank();
    SoundHandler::irq_vblank();
  }

  static void playSE(void) {
    if (Self::isMissJustNow()) {
      SoundHandler::playSE(SoundResource::SE_EXPLODE_SELF);
      return;
    }

    if (SoundHandler::getSEIndex() == SoundResource::SE_EXPLODE_SELF) {
      return;
    }

    if (soundExplodeBossShieldFlag) {
      SoundHandler::playSE(SoundResource::SE_EXPLODE_BOSS_SHIELD);
      return;
    }

    if (SoundHandler::getSEIndex() == SoundResource::SE_EXPLODE_BOSS_SHIELD) {
      return;
    }

    if (soundToggleSlowModeFlag) {
      SoundHandler::playSE(SoundResource::SE_TOGGLE_SLOW_MODE);
      return;
    }

    if (SoundHandler::isSEPlaying()) {
      return;
    }

    if (soundShotHitFlag) {
      SoundHandler::playSE(SoundResource::SE_SHOT_HIT);
      return;
    }
  }

  // --------------------------------------------------
  static bool isExitLoop;
  static PlayTime playTime;
  static JewelInfo jewelInfo;

  static bool isHit;
  static int invincibleTime;

  static int stage;

  static bool soundShotHitFlag;
  static bool soundExplodeBossShieldFlag;
  static bool soundToggleSlowModeFlag;

  static bool isViewReplay;
  static Replay replay;

  static MenuTitle menuTitle;
  static MenuCredits menuCredits;
  static MenuReplayList menuReplayList;
};

#endif
