#ifndef MODEMANAGER_SHOOTING_HPP
#define MODEMANAGER_SHOOTING_HPP

#include "gameengine.hpp"
#include "barrageinfo.hpp"

class ModeManager_Shooting {
public:
  static void doLoop(const BarrageInfo * const *list);

private:
  static void showBossDestroy(void);
  static void showResult(bool isSave);

  static void initializeFunc() {
    SoundHandler::playMusic(SoundResource::MUSIC_CHALLENGE_INTRO, true);

    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_STATUS);
    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);

    ImageHandler::drawBGStatusJewel();
    ImageHandler::drawBGStatusTime();

    GameEngine::bulletInitialize();

    GameParams::bossBody.initialize();
    GameParams::bossCore.initialize();

    barrageIndex = 0;
    waitAfterGenerate = 0;
  }

  static void nextBulletFunc() {
    // do nothing
  }

  static void extraFunc() {
    GameEngine::drawPlayTime();
    GameEngine::drawFrameSkipCount();

    GameParams::bossBody.step();
    GameParams::lifeFrame.step();

    fireBarrage();

    // store shieldNum before bossCore.hitCheck.
    int shieldNum = GameParams::bossCore.getShieldNum();

    stepListShot();

    if (shieldNum != GameParams::bossCore.getShieldNum()) {
      bossShieldDestroyed();
    }

    checkHitWithBoss();

#if 1
    if (GameParams::lifeFrame.getLife() <= 0) {
      GameEngine::setExitLoopFlag();
    }
#endif

    if (! GameParams::bossCore.isAlive()) {
      GameEngine::setExitLoopFlag();
    }
  }

  static void fireBarrage(void) {
    if (waitAfterGenerate > 0) {
      --waitAfterGenerate;
    } else {
      const BarrageInfo *barrageInfo = getCurrentBullet();

      if (barrageInfo->type == ACTIONTYPE_WAIT) {
        waitAfterGenerate = barrageInfo->num;

      } else if (barrageInfo->type == ACTIONTYPE_BULLET_NORMAL) {
        BulletInfo *bi = (barrageInfo->func)(barrageInfo->x, barrageInfo->y);
        if (bi == NULL) {
          return;
        }
      }

      getNextBullet();
    }
  }

  static const BarrageInfo *getCurrentBullet(void) { return *listBarrage + barrageIndex; }
  static const BarrageInfo *getNextBullet(void) {
    ++barrageIndex;
    if ((*listBarrage)[barrageIndex].type == END_OF_ACTIONTYPE) {
      barrageIndex = 0;
    }
    return getCurrentBullet();
  }
  static void succListBarrage(void) {
    waitAfterGenerate = 0;
    barrageIndex = 0;
    ++listBarrage;
    if (*listBarrage == NULL) {
      listBarrage = listBarrage_base + 0;
    }
  }

  static void stepListShot(void) {
    int minPosY;
    int maxPosY;
    GameEngine::listShot.step(&minPosY, &maxPosY);

    for (int i = 0; i < GameParams::MAX_SHOT; ++i) {
      if (! GameEngine::listShot.isEnable(i)) {
        continue;
      }

      ShotInfo *s = GameEngine::listShot.getShot(i);

      int x = s->getPosX();
      if (x > Common::SCREEN_SIZE_X) {
        GameEngine::listShot.dropShot(i);
        continue;
      }

      if (GameParams::bossBody.isBossEnabled()) {
        const int minX = 180;
        const int maxX = 200;
        if (static_cast<u32>(x - minX) < static_cast<u32>(maxX - minX)) {
          const int shotCenter = s->getPosY() + (ImageHandler::OBJPIXEL_HEIGHT_SHOT / 2);

          if (GameParams::bossCore.hitCheck(shotCenter)) {
            GameEngine::setSoundShotHitFlag();
            GameParams::bossBody.setDamageEffect();
            GameEngine::listShot.dropShot(s);
          }
        }
      }
    }
  }

  static void checkHitWithBoss(void) {
    const int minX = 184;
    const int maxX = 208;
    const int minY = 80 - 38;
    const int maxY = 80 + 30;
    if ((static_cast<u32>(SelfPos::posy.toInt() - minY) < static_cast<u32>(maxY - minY)) &
        (static_cast<u32>(SelfPos::posx.toInt() - minX) < static_cast<u32>(maxX - minX))) {
      Self::miss();
    }
  }

  static void bossShieldDestroyed(void) {
    int waitTime = 0;
    for (BulletInfo *bi = ListBullets::getFirstItem(); bi != NULL; bi = ListBullets::iterator(bi)) {
      bi->stepFuncList = StepFunc::effectHitStepFuncList;
      bi->wait = (waitTime & 0x3);
      ++waitTime;
    }
    GameParams::bossBody.setVibrateEffect();
    succListBarrage();
    // set waitAfterGenerate to wait "bullet explode" disappear.
    waitAfterGenerate = 30;
    GameEngine::setInvincibleTime(60);

    GameParams::lifeFrame.extend();

    GameEngine::setSoundExplodeBossShieldFlag();
    GameEngine::succStage();

    if (GameParams::bossCore.getShieldNum() == 0) {
      SoundHandler::playMusic(SoundResource::MUSIC_SHOOTING_INTRO, true);
    }
  }

  static const BarrageInfo * const *listBarrage;
  static const BarrageInfo * const *listBarrage_base;
  static int barrageIndex;
  static int waitAfterGenerate;
};

#endif
