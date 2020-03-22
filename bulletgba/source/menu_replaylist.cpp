#include <gba.h>
#include "menu_common.hpp"
#include "menu_replaylist.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "libgbakey.hpp"
#include "simplestring.hpp"

bool
MenuReplayList::doLoop()
{
  initialize();

  MenuCommon::loop_initialize();
  setupFont();

  int wait = 0;
  bool isSelected = true;

  drawAllText();

  for (;;) {
    GBAKey::scanKeys();
    u32 keysDown = GBAKey::getKeysDown();
    u32 keysHeld = GBAKey::getKeysHeld();

    if (keysDown & KEY_A) {
      MenuCommon::playSE_select();
      isSelected = true;
      break;
    }
    if (keysDown & KEY_B) {
      MenuCommon::playSE_cancel();
      isSelected = false;
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
              selectedIndex = lineSize - 1;
            } else {
              --selectedIndex;
            }
            if (! isPosValid()) {
              setPosBottom();
            }
          } else {
            ++selectedIndex;
            if (selectedIndex >= lineSize) {
              selectedIndex = 0;
            }
            if (! isPosValid()) {
              setPosTop();
            }
          }
        }

        if (keysHeld & (KEY_UP | KEY_DOWN)) {
          MenuCommon::playSE_changepage();

          isDemoPlay = ! isDemoPlay;
          setPosTop();

          setupFont();
        }

        drawAllText();
      }
    }

    VBlankIntrWait();
  }

  MenuCommon::loop_terminate();
  return isSelected;
}

void
MenuReplayList::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawStringVertical(23, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_selectReplay, bgmapIndex);

  ImageHandler::drawBGMenuLeftArrow(23, 0, ImageHandler::BGCOLOR_FONT_GREEN);
  ImageHandler::drawBGMenuRightArrow(23, 19, ImageHandler::BGCOLOR_FONT_GREEN);

  int tileX = 21;
  int tileY = 1;

  int lineIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    Line *p = line + i;
    if (p->isDemoPlay != isDemoPlay) {
      continue;
    }

    if (si_lineTitle[lineIndex].getSize() == 0) {
      break;
    }

    int palette = ImageHandler::BGCOLOR_FONT_WHITE + (i == selectedIndex);

    ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
    FontHandler::drawStringVertical(tileX, tileY + 1, palette, si_lineTitle[lineIndex], bgmapIndex);
    FontHandler::drawStringVertical(tileX - 1, tileY + 2, palette, si_lineInfo1[lineIndex], bgmapIndex);
    FontHandler::drawStringVertical(tileX - 2, tileY + 2, palette, si_lineInfo2[lineIndex], bgmapIndex);

    tileX -= 4;
    ++lineIndex;
  }
}


void
MenuReplayList::initialize()
{
  memset(line, 0, sizeof(line));
  lineSize = 0;

  pushToList(Replay::REPLAY_TYPE_LEVEL1, false);
  pushToList(Replay::REPLAY_TYPE_LEVEL2, false);
  pushToList(Replay::REPLAY_TYPE_LEVEL3, false);
  pushToList(Replay::REPLAY_TYPE_LEVEL4, false);
  pushToList(Replay::REPLAY_TYPE_LEVEL1, true);
  pushToList(Replay::REPLAY_TYPE_LEVEL2, true);
  pushToList(Replay::REPLAY_TYPE_LEVEL3, true);
  pushToList(Replay::REPLAY_TYPE_LEVEL4, true);
}


void
MenuReplayList::pushToList(Replay::ReplayType type, bool isDemoPlay)
{
  SRAMFileSystem::FilePtr ptr;
  if (isDemoPlay) {
    Replay::getSavedReplay(&ptr, MainInfo::sramFS_DemoPlayData, type);
  } else {
    Replay::getSavedReplay(&ptr, MainInfo::sramFS_SRAM, type);
  }
  if (! ptr.isNULL()) {
    if (lineSize < MAX_REPLAY_NUM) {
      Line *p = line + lineSize;

      (p->replayHeader).loadFromSRAM(&ptr);
      p->isDemoPlay = isDemoPlay;

      ++lineSize;
    }
  }
}

void
MenuReplayList::setPosTop(void)
{
  selectedIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    if (line[i].isDemoPlay == isDemoPlay) {
      selectedIndex = i;
      return;
    }
  }
}

void
MenuReplayList::setPosBottom(void)
{
  selectedIndex = 0;
  for (int i = lineSize - 1; i > 0; --i) {
    if (line[i].isDemoPlay == isDemoPlay) {
      selectedIndex = i;
      return;
    }
  }
}

bool
MenuReplayList::isPosValid(void)
{
  return line[selectedIndex].isDemoPlay == isDemoPlay;
}

void
MenuReplayList::setupFont(void)
{
  MenuCommon::setMosaic();
  MenuCommon::initialize_fonthandler();

  if (! isDemoPlay) {
    FontHandler::makeStringVertical(&si_selectReplay, 0, "[ Select Replay ]");
  } else {
    FontHandler::makeStringVertical(&si_selectReplay, 0, "[ Select DemoPlay ]");
  }

  for (int i = 0; i < MAX_LEVEL; ++i) {
    si_lineTitle[i].initialize();
    si_lineInfo1[i].initialize();
    si_lineInfo2[i].initialize();
  }

  int lineIndex = 0;
  for (int i = 0; i < lineSize; ++i) {
    Line *p = line + i;
    if (p->isDemoPlay != isDemoPlay) {
      continue;
    }

    Replay::ReplayType type = (p->replayHeader).getType();
    if (type == Replay::REPLAY_TYPE_LEVEL1) {
      FontHandler::makeStringVertical(si_lineTitle + lineIndex, 0, " Shooting Level 1");
    } else if (type == Replay::REPLAY_TYPE_LEVEL2) {
      FontHandler::makeStringVertical(si_lineTitle + lineIndex, 0, " Shooting Level 2");
    } else if (type == Replay::REPLAY_TYPE_LEVEL3) {
      FontHandler::makeStringVertical(si_lineTitle + lineIndex, 0, " Shooting Level 3");
    } else {
      FontHandler::makeStringVertical(si_lineTitle + lineIndex, 0, " Shooting Level 4");
    }

    PlayTime playtime((p->replayHeader).getPlayTime());
    SimpleString<64> lineInfoString;
    // ------------------------------------------------------------
    lineInfoString.initialize();
    lineInfoString.append("Stage: ");
    if ((p->replayHeader).getIsClear()) {
      lineInfoString.append("ALL");
    } else {
      lineInfoString.append((p->replayHeader).getStage(), 1);
    }

    FontHandler::makeStringVertical(si_lineInfo1 + lineIndex, 0, lineInfoString.c_str());

    // ------------------------------------------------------------
    lineInfoString.initialize();

    lineInfoString.append("Life ");
    lineInfoString.append((p->replayHeader).getLifeFrameHeart(), 2);
    lineInfoString.append('/');
    lineInfoString.append((p->replayHeader).getLifeFrameSize(), 2);

    lineInfoString.append("  Time ");
    lineInfoString.append(playtime.getMin(), 1);
    lineInfoString.append(':');
    lineInfoString.append(playtime.getSec(), 2);
    lineInfoString.append(':');
    lineInfoString.append(playtime.getMilliSec(), 2);

    FontHandler::makeStringVertical(si_lineInfo2 + lineIndex, 0, lineInfoString.c_str());

    ++lineIndex;
    if (lineIndex >= MAX_LEVEL) {
      break;
    }
  }
}
