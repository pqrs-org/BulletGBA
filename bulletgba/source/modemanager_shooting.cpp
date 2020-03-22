#include "modemanager_shooting.hpp"

const BarrageInfo * const *ModeManager_Shooting::listBarrage;
const BarrageInfo * const *ModeManager_Shooting::listBarrage_base;
int ModeManager_Shooting::barrageIndex;
int ModeManager_Shooting::waitAfterGenerate;

void
ModeManager_Shooting::doLoop(const BarrageInfo * const *list)
{
  listBarrage_base = list;
  listBarrage = listBarrage_base;

  bool isSave = GameEngine::doLoop<true, initializeFunc, nextBulletFunc, extraFunc>();

  bool isClear = ! GameParams::bossCore.isAlive();
  if (isClear) {
    ModeManager_Shooting::showBossDestroy();
  }
  showResult(isSave);
}

void
ModeManager_Shooting::showBossDestroy()
{
  BG0HOFS = 2;
  BG1HOFS = 0;
  BG2HOFS = 0;
  BG3HOFS = 0;

  BG0VOFS = 0;
  BG1VOFS = 0;
  BG2VOFS = 0;
  BG3VOFS = 0;

  SetInterrupt(IE_VBL, SoundHandler::irq_vblank);
  EnableInterrupt(IE_VBL);

  SoundHandler::playSE(SoundResource::SE_BOSS_DESTROY_VIBRATION);

  // --------------------------------------------------
  // vibration
  Common::initializeSprites();
  for (int i = 0; i < 2; ++i) {
    GameParams::bossBody.setVibrateEffect();
    while (GameParams::bossBody.isVibrateEffect()) {
      GBAKey::scanKeys();
      u16 keysHeld = GBAKey::getKeysHeld();
      Self::step(keysHeld);
      GameParams::bossBody.step();
      VBlankIntrWait();
    }
  }

  // --------------------------------------------------
  // explode
  SoundHandler::playSE(SoundResource::SE_BOSS_DESTROY_EXPLODE);

  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_GAME_BOSS);
  GameParams::bossBody.step();
  GameParams::EffectExplode explode;
  explode.initialize();
  explode.setup(GameParams::bossCore.getCenterPosX() - explode.getWidth() / 2,
                GameParams::bossCore.getCenterPosY() - explode.getHeight() / 2);
  while (explode.isAlive()) {
    GBAKey::scanKeys();
    u16 keysHeld = GBAKey::getKeysHeld();
    Self::step(keysHeld);
    explode.step();
    VBlankIntrWait();
  }

  DisableInterrupt(IE_VBL);
}


void
ModeManager_Shooting::showResult(bool isSave)
{
  Replay::ReplayType type = Replay::REPLAY_TYPE_NONE;

  SetInterrupt(IE_VBL, SoundHandler::irq_vblank);
  EnableInterrupt(IE_VBL);

  SoundHandler::stopMusic();

  GameEngine::drawPlayTime();
  GameEngine::drawFrameSkipCount();
  GameParams::bossBody.step();
  GameParams::lifeFrame.step();

  // ------------------------------------------------------------
  ImageHandler::drawBGResultBorder();
  ImageHandler::drawBGResultPressA();

  if (! GameEngine::isViewReplayMode() && isSave) {
    if (GameEngine::getPlayTime().getTotalFrame() < KeyLog::LISTKEYLOG_SIZE) {
      type = GameEngine::getReplay().saveToSRAM();
    } else {
        ImageHandler::drawBGResultTimeOver();
    }
  }

  if (type == Replay::REPLAY_TYPE_NONE) {
    if (GameParams::bossCore.isAlive()) {
      ImageHandler::drawBGResultGameOver();
    } else {
      ImageHandler::drawBGResultClear();
    }
  } else {
    ImageHandler::drawBGResultBestPlay();
    ImageHandler::drawBGResultReplaySaved();
  }

  int soundWait = 60;
  for (;;) {
    GBAKey::scanKeys();

    u16 keysDown = GBAKey::getKeysDown();
    if (keysDown & KEY_A) {
      break;
    }
    if (Self::isExplode()) {
      Self::step(0);
    }

    if (soundWait > 0) {
      --soundWait;
      if (soundWait == 0) {
        SoundHandler::playMusic(SoundResource::MUSIC_RESULT, false);
      }
    }

    VBlankIntrWait();
  }
  DisableInterrupt(IE_VBL);
}
