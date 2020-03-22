#include <gba.h>

#include "gameengine.hpp"
#include "spritedoubler.hpp"
#include "bullet.hpp"
#include "fixed.hpp"

#include "modemanager_normal.hpp"
#include "modemanager_shooting.hpp"
#include "modemanager_bulletsmorph.hpp"

#include "barrageinfo.hpp"
#include "barragelist.hpp"

ListShot GameEngine::listShot;

bool GameEngine::isExitLoop;
PlayTime GameEngine::playTime;
JewelInfo GameEngine::jewelInfo;

bool GameEngine::isHit;
int GameEngine::invincibleTime;

int GameEngine::stage;

bool GameEngine::soundShotHitFlag;
bool GameEngine::soundExplodeBossShieldFlag;
bool GameEngine::soundToggleSlowModeFlag;

bool GameEngine::isViewReplay;
EWRAM_DATA Replay GameEngine::replay;

EWRAM_DATA MenuTitle GameEngine::menuTitle;
EWRAM_DATA MenuCredits GameEngine::menuCredits;
EWRAM_DATA MenuReplayList GameEngine::menuReplayList;


void
GameEngine::compileBullet()
{
  SpriteDoubler::CompiledObjattr *p = SpriteDoubler::getIncurrentCompiledObjattr();
  p->initializePerFrame();

  BulletInfo *bi;
  // ------------------------------------------------------------
  bi = ListBullets::getFirstItem();
  for (;;) {
    if (bi == NULL) {
      break;
    }
    p->registItemNumInBlock(bi->getPosY().toInt());

    bi = ListBullets::iterator(bi);
  }

  // ------------------------------------------------------------
  p->normalizeItemNumInBlock();
  p->makeObjAttrStartPosInBlock();

  // ------------------------------------------------------------
  bi = ListBullets::getFirstItem();
  for (;;) {
    if (bi == NULL) {
      break;
    }
    if (bi->getType() == BULLET_TYPE_DIRECTION) {
      p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                       OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET_NORMAL + jewelInfo.isSlowMode()) |
                       OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                       ImageResource::getTileIndex<ImageResource::SPR_BULLET_DIRECTION>::value + bi->getAnglePattern());
    } else if (bi->getType() == BULLET_TYPE_THIN) {
      p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                       OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET_NORMAL + jewelInfo.isSlowMode()) |
                       OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                       ImageResource::getTileIndex<ImageResource::SPR_BULLET_THIN>::value + bi->getAnglePattern());
    } else if (bi->getType() == BULLET_TYPE_SMALL) {
      p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                       OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET_NORMAL + jewelInfo.isSlowMode()) |
                       OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                       ImageResource::getTileIndex<ImageResource::SPR_BULLET_SMALL>::value + (bi->getCounter() & 0x3));
      bi->succCounter();
    } else if (bi->getType() == BULLET_TYPE_ROOT) {
      p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                       OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET_NORMAL + jewelInfo.isSlowMode()) |
                       OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                       ImageResource::getTileIndex<ImageResource::SPR_BULLET_MIDDLE>::value + (bi->getCounter() & 0x7));
      bi->succCounter();
    } else if (bi->getType() == BULLET_TYPE_EXPLODE) {
      p->registObjAttr(bi->getPosY().toInt(), bi->getPosX().toInt(),
                       OBJ_PALETTE(ImageHandler::OBJCOLOR_BULLET_EXPLODE) |
                       OBJ_PRIORITY(GameParams::OBJ_PRIORITY_SPRITE) |
                       ImageResource::getTileIndex<ImageResource::SPR_BULLET_EXPLODE>::value + (bi->getCounter() & 0x7));
      bi->succCounter();
    }

    bi = ListBullets::iterator(bi);
  }

  p->calcIRQInfo();
}

/**
 * !! Note: Please call hitCheck before compileBullet. !!
 */
void
GameEngine::hitCheck(void)
{
  SpriteDoubler::CompiledObjattr *p = SpriteDoubler::getIncurrentCompiledObjattr();

  int posx = SelfPos::posx.toInt();
  int posy = SelfPos::posy.toInt();
  int idx = (posy + SpriteDoubler::OFFSET_Y) / SpriteDoubler::LINEBLOCK;

  OBJATTR *obj = p->objattrStartPosInBlock[idx];

  for (int i = 0; i < p->itemNumInBlock[idx]; ++i) {
    // !! Note: This check depend SpriteDoubler inner data handling. !!
    if ((obj->attr0 == posy) & (static_cast<u32>(posx + 1 - obj->attr1) <= 2)) {
      if (Self::miss()) {
        isHit = true;
        if (jewelInfo.isSlowMode()) {
          jewelInfo.cancel();
        }
      }
      break;
    }
    ++obj;
  }
}

void
GameEngine::loop_initialize(void)
{
  // GBAKey reset for KeyLog
  GBAKey::initialize();

  Common::initializeSprites();
  SpriteDoubler::initialize();
  GameParams::lifeFrame.initialize(GameParams::INITIAL_LIFE);

  bulletInitialize();
  jewelInfo.initialize();
  playTime.initialize();
  invincibleTime = 0;
  stage = 1;

  SelfPos::setPos(10 - ImageHandler::OBJPIXEL_WIDTH_SELF / 2,
                  80 - ImageHandler::OBJPIXEL_HEIGHT_SELF / 2);
  Self::initialize();
  listShot.initialize();

  SetMode(MODE_0 | BG0_ON | BG2_ON | BG3_ON | OBJ_ENABLE | OBJ_1D_MAP | BIT(5));

  REG_BG0CNT = BG_SIZE_0 | BG_PRIORITY(0) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_GAME_STATUS);

  REG_BG2CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_GAME_BOSS);

  REG_BG3CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_BG);

  BG0HOFS = 2;
  BG2HOFS = 0;
  BG3HOFS = 0;

  SetInterrupt(IE_VBL, irq_vblank);
  SetInterrupt(IE_VCNT, SpriteDoubler::irq_vcount);

  REG_DISPSTAT = (REG_DISPSTAT & 0xff) | VCOUNT(Common::SCREEN_SIZE_Y);

  EnableInterrupt(IE_VBL);
  EnableInterrupt(IE_VCNT);
}

void
GameEngine::bulletInitialize(void)
{
  ListBullets::initialize();
  isHit = false;
}

void
GameEngine::loop_terminate()
{
  DisableInterrupt(IE_VCNT);
  DisableInterrupt(IE_VBL);
}

void
GameEngine::doMainMenu(void)
{
  menuTitle.resetPos();
  ModeManager_Normal::initialize();

  for (;;) {
    menuTitle.doLoop();
    isViewReplay = false;

    switch (menuTitle.getGameMode()) {
      case MenuTitle::GAMEMODE_SELECT_BARRAGE:
        ModeManager_Normal::doLoop();
        break;

      case MenuTitle::GAMEMODE_SHOOTING_LEVEL1:
        replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL1);
        ModeManager_Shooting::doLoop(listBarrage_L1_all);
        break;
      case MenuTitle::GAMEMODE_SHOOTING_LEVEL2:
        replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL2);
        ModeManager_Shooting::doLoop(listBarrage_L2_all);
        break;
      case MenuTitle::GAMEMODE_SHOOTING_LEVEL3:
        replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL3);
        ModeManager_Shooting::doLoop(listBarrage_L3_all);
        break;
      case MenuTitle::GAMEMODE_SHOOTING_LEVEL4:
        replay.initializeToSave(Replay::REPLAY_TYPE_LEVEL4);
        ModeManager_Shooting::doLoop(listBarrage_L4_all);
        break;

      case MenuTitle::GAMEMODE_BULLETSMORPH:
        ModeManager_BulletsMorph::doLoop();
        break;

      case MenuTitle::GAMEMODE_VIEW_REPLAY:
        menuReplayList.resetPos();

        for (;;) {
          if (! menuReplayList.doLoop()) {
            break;
          }

          isViewReplay = true;
          const MenuReplayList::Line *p = menuReplayList.getSelectedLine();
          SRAMFileSystem::FilePtr ptr;
          if (p->isDemoPlay) {
            Replay::getSavedReplay(&ptr, MainInfo::sramFS_DemoPlayData, (p->replayHeader).getType());
          } else {
            Replay::getSavedReplay(&ptr, MainInfo::sramFS_SRAM, (p->replayHeader).getType());
          }
          replay.loadFromSRAM(&ptr);

          Replay::ReplayType type = p->replayHeader.getType();
          if (type == Replay::REPLAY_TYPE_LEVEL1) {
            ModeManager_Shooting::doLoop(listBarrage_L1_all);
          } else if (type == Replay::REPLAY_TYPE_LEVEL2) {
            ModeManager_Shooting::doLoop(listBarrage_L2_all);
          } else if (type == Replay::REPLAY_TYPE_LEVEL3) {
            ModeManager_Shooting::doLoop(listBarrage_L3_all);
          } else if (type == Replay::REPLAY_TYPE_LEVEL4) {
            ModeManager_Shooting::doLoop(listBarrage_L4_all);
          }
        }
        break;

      case MenuTitle::GAMEMODE_CREDITS:
        menuCredits.doLoop();
        break;

      default:
        break;
    }
  }
}

