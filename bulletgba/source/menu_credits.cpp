#include <gba.h>
#include "menu_common.hpp"
#include "menu_credits.hpp"
#include "libgbakey.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "fixed.hpp"

void
MenuCredits::doLoop(void)
{
  isSRAMResetDone = false;

  MenuCommon::loop_initialize();
  setupFont();

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();
    u32 keysHeld = GBAKey::getKeysHeld();

    if (keysDown & KEY_B) {
      MenuCommon::playSE_cancel();
      break;
    }

    u32 keyCombination = KEY_L | KEY_R | KEY_LEFT | KEY_A;
    if ((keyCombination & keysHeld) == keyCombination) {
      MainInfo::sramFS_SRAM.deleteAllFiles();
      isSRAMResetDone = true;
      drawAllText();
    }

    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
}


void
MenuCredits::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawStringVertical(23, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_credits, bgmapIndex);

  int tileX = 21;
  int tileY = 1;
  int palette = ImageHandler::BGCOLOR_FONT_WHITE;

  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawStringVertical(tileX, tileY + 1, palette, si_design, bgmapIndex);
  tileX -= 2;
  FontHandler::drawStringVertical(tileX, tileY + 2, palette, si_designStaffName, bgmapIndex);
  tileX -= 1;
  FontHandler::drawStringVertical(tileX, tileY + 3, palette, si_designStaffURL, bgmapIndex);

  tileX -= 3;

  ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
  FontHandler::drawStringVertical(tileX, tileY + 1, palette, si_music, bgmapIndex);
  tileX -= 2;
  FontHandler::drawStringVertical(tileX, tileY + 2, palette, si_musicStaffName, bgmapIndex);
  tileX -= 1;
  FontHandler::drawStringVertical(tileX, tileY + 3, palette, si_musicStaffURL, bgmapIndex);

  tileX = 5;
  if (! isSRAMResetDone) {
    FontHandler::drawStringVertical(tileX, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_howtoResetSRAM1, bgmapIndex);
    tileX -= 1;
    FontHandler::drawStringVertical(tileX, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_howtoResetSRAM2, bgmapIndex);
  } else {
    FontHandler::drawStringVertical(tileX, 2, ImageHandler::BGCOLOR_FONT_RED, si_sramResetDone, bgmapIndex);
  }
}

void
MenuCredits::setupFont(void)
{
  FontHandler::makeStringVertical(&si_credits, 0, "[ Credits ]");
  FontHandler::makeStringVertical(&si_design, 0, " Design, Program, Artwork");
  FontHandler::makeStringVertical(&si_designStaffName, 0, "Takayama Fumihiko");
  FontHandler::makeStringVertical(&si_designStaffURL, 0, "http://gba.pqrs.org/");
  FontHandler::makeStringVertical(&si_music, 0, " Music");
  FontHandler::makeStringVertical(&si_musicStaffName, 0, "Nullsleep");
  FontHandler::makeStringVertical(&si_musicStaffURL, 0, "http://www.nullsleep.com/");

  FontHandler::makeStringVertical(&si_howtoResetSRAM1, 0, "Press   L + R + LEFT + A");
  FontHandler::makeStringVertical(&si_howtoResetSRAM2, 0, " to delete your replays.");
  FontHandler::makeStringVertical(&si_sramResetDone, 0, "Your replays are deleted.");
}
