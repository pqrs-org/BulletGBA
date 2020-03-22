#ifndef MODEMANAGER_NORMAL_HPP
#define MODEMANAGER_NORMAL_HPP

#include "gameengine.hpp"
#include "menu_list.hpp"

class ModeManager_Normal {
public:
  static void initialize(void);
  static void doLoop(void);

private:
  static void initializeFunc(void) {
    SoundHandler::playMusic(SoundResource::MUSIC_NORMAL, false);

    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_STATUS);
    ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);

    ImageHandler::drawBGStatusJewel();
    ImageHandler::drawBGStatusMiss();
    ImageHandler::drawBGStatusBullets();

    GameEngine::bulletInitialize();
    GameEngine::getJewelInfo().setInfinityFlag(true);

    getCurrentBullet()(GameEngine::DEFAULT_BULLET_POSX, GameEngine::DEFAULT_BULLET_POSY);
  }

  static void nextBulletFunc(void) {
    GameEngine::bulletInitialize();

    GameEngine::getJewelInfo().resetLife();

    BulletGenerateFunc func = getNextBullet();
    func(GameEngine::DEFAULT_BULLET_POSX, GameEngine::DEFAULT_BULLET_POSY);
  }

  static void extraFunc(void) {
    GameEngine::drawBulletsNum();
    GameEngine::drawMissCount();
    GameEngine::drawFrameSkipCount();
  }

  static BulletGenerateFunc getCurrentBullet(void);
  static BulletGenerateFunc getNextBullet(void);
  static void setBulletMenu(void);

  static MenuList menuSelectBarrageGroup;
  static MenuList menuSelectBarrageList;
};

#endif
