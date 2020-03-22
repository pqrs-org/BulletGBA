#include <gba.h>
#include "menu_common.hpp"
#include "menu_list.hpp"
#include "libgbakey.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "simplestring.hpp"

void
MenuList::initialize(const char *_title, const char * const *_list)
{
  title = _title;
  list = _list;

  listSize = 0;
  for (typeof(list) p = list; *p != NULL; ++p) {
    ++listSize;
  }

  resetPos();
}


bool
MenuList::doLoop(void)
{
  int wait = 0;
  bool isSelected = true;

  MenuCommon::loop_initialize();
  setupFont();

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
            // decrease index
            if (index > 0) {
              --index;
            } else {
              index = getLastItemInPage();
            }

          } else {
            // succ index
            if (index < getLastItemInPage()) {
              ++index;
            } else {
              index = 0;
            }
          }
        }

        if (getLastPage() > 0) {
          if (keysHeld & (KEY_UP | KEY_DOWN)) {
            MenuCommon::playSE_changepage();

            if (keysHeld & KEY_DOWN) {
              // succ page
              if (page < getLastPage()) {
                ++page;
              } else {
                page = 0;
              }
            }

            if (keysHeld & KEY_UP) {
              // decrease page
              if (page > 0) {
                --page;
              } else {
                page = getLastPage();
              }
            }

            index = 0;
            setupFont();
          }
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
MenuList::drawAllText(void)
{
  MenuCommon::clearAllText();

  int bgmapIndex = ImageHandler::BGMAP_INDEX_MENU_TEXT;

  FontHandler::drawStringVertical(23, 2, ImageHandler::BGCOLOR_FONT_GREEN, si_title, bgmapIndex);
  FontHandler::drawStringVertical(23, 15, ImageHandler::BGCOLOR_FONT_GREEN, si_page, bgmapIndex);
  if (getLastPage() > 0) {
    ImageHandler::drawBGMenuLeftArrow(23, 0, ImageHandler::BGCOLOR_FONT_GREEN);
    ImageHandler::drawBGMenuRightArrow(23, 19, ImageHandler::BGCOLOR_FONT_GREEN);
  }

  int tileX = 21;
  int tileY = 1;

  for (int i = 0; i < PAGEITEM; ++i) {
    if (! line[i].initializedFlag) {
      break;
    }

    int palette = ImageHandler::BGCOLOR_FONT_WHITE + (index == i);
    ImageHandler::drawBGMenuCircle(tileX, tileY, palette);
    FontHandler::drawStringVertical(tileX, tileY + 1, palette, line[i].si, bgmapIndex);
    tileX -= 2;
  }
}

void
MenuList::setupFont(void)
{
  MenuCommon::setMosaic();
  MenuCommon::initialize_fonthandler();

  //--------------------------------------------------
  FontHandler::makeStringVertical(&si_title, 0, title);

  //--------------------------------------------------
  SimpleString<64> pageString;
  pageString.initialize();
  pageString.append('(');
  pageString.append(page + 1, 1);
  pageString.append('/');
  pageString.append(getLastPage() + 1, 1);
  pageString.append(')');
  FontHandler::makeStringVertical(&si_page, 0, pageString.c_str());

  //--------------------------------------------------
  typeof(list) p = list + page * PAGEITEM;
  for (int i = 0; i < PAGEITEM; ++i, ++p) {
    line[i].initializedFlag = false;

    if (*p == NULL) {
      break;
    }

    line[i].initializedFlag = true;
    FontHandler::makeStringVertical(&(line[i].si), 0, *p);
  }
}

int
MenuList::getLastPage(void) const
{
  int div = Div(listSize, PAGEITEM);
  if (div * PAGEITEM == listSize) {
    --div;
  }
  return div;
}

int
MenuList::getLastItemInPage(void) const
{
  if (page < getLastPage()) {
    return PAGEITEM - 1;
  } else {
    int div = Div(listSize, PAGEITEM);
    if (div * PAGEITEM == listSize) {
      return PAGEITEM - 1;
    } else {
      return listSize - (div * PAGEITEM) - 1;
    }
  }
}

bool
MenuList::succ(void)
{
  if (index < getLastItemInPage()) {
    ++index;
    return true;
  } else {
    if (page < getLastPage()) {
      ++page;
      index = 0;
      return true;
    }
  }
  return false;
}
