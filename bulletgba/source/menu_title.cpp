#include <gba.h>
#include "menu_common.hpp"
#include "menu_title.hpp"
#include "libgbakey.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "fixed.hpp"

void
MenuTitle::doLoop(void)
{
  int wait = 0;

  MenuCommon::loop_initialize();
  setupFont();

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();
    u32 keysHeld = GBAKey::getKeysHeld();

    if (keysDown & KEY_A) {
      MenuCommon::playSE_select();
      break;
    }

    if (!(keysHeld & DPAD)) {
      wait = 0;
    } else {
      if (wait > 0) {
        --wait;
      } else {
        wait = 10;
        if (keysHeld & (KEY_LEFT | KEY_RIGHT)) {
          MenuCommon::playSE_click();
          if (keysHeld & KEY_RIGHT) {
            if (selectedIndex == 0) {
              selectedIndex = END_OF_GAMEMODE - 1;
            } else {
              --selectedIndex;
            }
          } else {
            ++selectedIndex;
            if (selectedIndex >= END_OF_GAMEMODE) {
              selectedIndex = 0;
            }
          }
          drawAllText();
        }
      }
    }
    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
}


void
MenuTitle::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawStringVertical(23, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_selectMode, bgmapIndex);

  int tileX = 21;
  int tileY = 1;
  int palette;

  struct {
    GameMode mode;
    FontHandler::StringInfo &si;
  } list[] = {
    {GAMEMODE_SELECT_BARRAGE, si_selectBarrage},
    {GAMEMODE_SHOOTING_LEVEL1, si_shooting_L1},
    {GAMEMODE_SHOOTING_LEVEL2, si_shooting_L2},
    {GAMEMODE_SHOOTING_LEVEL3, si_shooting_L3},
    {GAMEMODE_SHOOTING_LEVEL4, si_shooting_L4},
    {GAMEMODE_BULLETSMORPH, si_bulletsMorph},
    {GAMEMODE_VIEW_REPLAY, si_viewReplay},
    {GAMEMODE_CREDITS, si_credits},
  };
  for (u32 i = 0; i < sizeof(list) / sizeof(list[0]); ++i) {
    palette = ImageHandler::BGCOLOR_FONT_WHITE + (selectedIndex == list[i].mode);
    ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
    FontHandler::drawStringVertical(tileX, tileY + 1, palette, list[i].si, bgmapIndex);
    tileX -= 2;
  }
}

void
MenuTitle::setupFont(void)
{
  FontHandler::makeStringVertical(&si_selectMode, 0, "[ Select Mode ]");
  FontHandler::makeStringVertical(&si_selectBarrage, 0, " Select Barrage");
  FontHandler::makeStringVertical(&si_shooting_L1, 0, " Shooting Level 1");
  FontHandler::makeStringVertical(&si_shooting_L2, 0, " Shooting Level 2");
  FontHandler::makeStringVertical(&si_shooting_L3, 0, " Shooting Level 3");
  FontHandler::makeStringVertical(&si_shooting_L4, 0, " Shooting Level 4");
  FontHandler::makeStringVertical(&si_bulletsMorph, 0, " BulletsMorph");
  FontHandler::makeStringVertical(&si_viewReplay, 0, " View Replay & DemoPlay");
  FontHandler::makeStringVertical(&si_credits, 0, " Credits");
}

bool
MenuTitle::isGameMode_shooting(void) const
{
  return GAMEMODE_SHOOTING_LEVEL1 <= selectedIndex && selectedIndex <= GAMEMODE_SHOOTING_LEVEL4;
}

int
MenuTitle::getGameLevel(void) const
{
  return selectedIndex - GAMEMODE_SHOOTING_LEVEL1 + 1;
}
