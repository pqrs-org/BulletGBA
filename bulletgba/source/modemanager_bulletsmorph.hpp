#ifndef MODEMANAGER_BULLETSMORPH_HPP
#define MODEMANAGER_BULLETSMORPH_HPP

#include "gameengine.hpp"

class ModeManager_BulletsMorph {
public:
  static void doLoop(void);

private:
  static void initializeFunc(void) {
    SoundHandler::playMusic(SoundResource::MUSIC_NORMAL, false);

    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_STATUS);
    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);

    ImageHandler::drawBGStatusJewel();
    ImageHandler::drawBGStatusMiss();
    ImageHandler::drawBGStatusBullets();

    frameCounter = 0;

    GameEngine::bulletInitialize();
    GameEngine::getJewelInfo().setInfinityFlag(true);

    fireRandBullet();
  }

  static void nextBulletFunc(void) {
    GameEngine::bulletInitialize();
    fireRandBullet();
  }

  static void extraFunc(void) {
    GameEngine::drawBulletsNum();
    GameEngine::drawMissCount();
    GameEngine::drawFrameSkipCount();

    ++frameCounter;
    if (frameCounter >= 120) {
      frameCounter = 0;
      const BulletStepFunc* randStepFunc = getRandStepFuncList();

      BulletInfo *bi = ListBullets::getFirstItem();
      for (;;) {
        if (bi == NULL) {
          break;
        }

#if 0
        if (bi->isUnionAnglePattern() || bi->getCounter() > 120) {
          bi->stepFuncList = randStepFunc;
        }
#else
        if (bi->getCounter() > 60) {
          bi->stepFuncList = randStepFunc;
        }
#endif

        if (bi->wait > 60) {
          bi->wait = 60;
        }

        bi = ListBullets::iterator(bi);
      }
      fireRandBullet();
    }
  }

  static void fireRandBullet() {
    BulletInfo *bi = ListBullets::makeNewBullet();
    if (bi) {
      s32 idx = DivMod(genrand_int31(), callingvectorListSize);
      bi->initialize(BULLET_TYPE_ROOT, GameEngine::DEFAULT_BULLET_POSX, GameEngine::DEFAULT_BULLET_POSY,
                     BulletInfo::DEFAULT_ANGLE, 0, callingvectorList[idx]);
    }
  }
  static const BulletStepFunc *getRandStepFuncList() {
    s32 idx = DivMod(genrand_int31(), callingvectorListSize);
    return callingvectorList[idx] + DivMod(genrand_int31(), callingvectorSizeList[idx]);
  }

  static int frameCounter;
};



#endif
