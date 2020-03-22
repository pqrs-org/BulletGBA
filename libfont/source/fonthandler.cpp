#include "fonthandler.hpp"
#include "fontdata.hpp"
#include "tilerotate.hpp"

int FontHandler::tileIndex = 0;
int FontHandler::tileEnd = 0;

void
FontHandler::initialize(int _tileIndex, int _tileSize)
{
  tileIndex = _tileIndex;
  tileEnd = _tileIndex + _tileSize;

  u32 *tileBase = static_cast<u32 *>(MAP_BASE_ADR(0)) + (tileIndex * 8);
  for (int i = 0; i < _tileSize; ++i) {
    *tileBase++ = 0; *tileBase++ = 0;
    *tileBase++ = 0; *tileBase++ = 0;
    *tileBase++ = 0; *tileBase++ = 0;
    *tileBase++ = 0; *tileBase++ = 0;
  }
}

void
FontHandler::getCharFontInfo(CharFontInfo *info, int c)
{
  const u8 *p = TILEINFO_fontdata::img + ((c - 32) * 4 * 8);

  info->leftPos = -1;
  info->rightPos = -1;

  for (int x = 0; x < 4; ++x) {
    int vline = 0;
    for (int y = 0; y < 8; ++y) {
      vline |= p[y * 4 + x];
    }

    int l1 = (vline & 0x0f);
    int l2 = (vline & 0xf0);

    if (l1 != 0) {
      if (info->leftPos == -1) {
        info->leftPos = x * 2;
      }
      info->rightPos = x * 2;
    }
    if (l2 != 0) {
      if (info->leftPos == -1) {
        info->leftPos = x * 2 + 1;
      }
      info->rightPos = x * 2 + 1;
    }
  }
}

// Note: must y < 7.
void
FontHandler::drawDot(u32 *tileBase, int x, int y, int paletteIndex)
{
  int blockIndex = x / 8;
  u32 *tile = tileBase + blockIndex * 8 + y;
  int shift = (x & 0x7) * 4;
  *tile |= (paletteIndex << shift);
}

void
FontHandler::makeString(StringInfo *si, int beginningBlankX, const char *str)
{
  si->initialize();

  int restWidth = (tileEnd - tileIndex) * 8;
  if (restWidth <= 0) {
    return;
  }

  si->setTileIndex(tileIndex);
  u32 *tileBase = static_cast<u32 *>(MAP_BASE_ADR(0)) + (si->getTileIndex() * 8);

  int posX = beginningBlankX;
#define SUCC_POSX(NUM) { posX += NUM; if (restWidth < posX) { goto finish; }}

  for (int c = *str++; c != '\0'; c = *str++) {
    if (c == ' ' || c == '_') {
      SUCC_POSX(4);
      continue;
    }

    const u8 *font = TILEINFO_fontdata::img + ((c - 32) * 4 * 8);
    CharFontInfo info;
    getCharFontInfo(&info, c);

    if (info.leftPos >= 0) {
      for (int x = info.leftPos; x <= info.rightPos; ++x) {
        const u8 *p = font + (x / 2);
        for (int y = 0; y < 8; ++y, p += 4) {
          int paletteIndex = 0;
          if ((x & 0x1) == 0) {
            paletteIndex = (*p & 0x0f);
          } else {
            paletteIndex = (*p & 0xf0) >> 4;
          }
          drawDot(tileBase, posX, y, paletteIndex);
        }
        SUCC_POSX(1);
      }
    }

    const char *combine[] = {
      "it", "re", "tt", "ht", "tp", "//", "Te", "Fo",
      NULL,
    };
    bool isCombine = false;
    for (int i = 0; combine[i]; ++i) {
      if (c == combine[i][0] && *str == combine[i][1]) {
        isCombine = true;
      }
    }
    if (isCombine) {
      continue;
    } else {
      SUCC_POSX(1);
    }
  }

finish:
  while (posX & 0x7) {
    ++posX;
  }
  si->setSize(posX / 8);
  tileIndex += si->getSize();
}

void
FontHandler::makeStringVertical(StringInfo *si, int beginningBlankX, const char *str)
{
  makeString(si, beginningBlankX, str);
  for (int i = 0; i < si->getSize(); ++i) {
    TileRotate::tileRotate270(si->getTileIndex() + i);
  }
}


void
FontHandler::drawString(int tileX, int tileY, int palette, const StringInfo &si, int bgmapIndex)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(bgmapIndex));
  for (int x = 0; x < si.getSize(); ++x) {
    bgmap[tileY * 32 + tileX + x] = (si.getTileIndex() + x) | BG_PALETTE(palette);
  }
}

void
FontHandler::drawStringVertical(int tileX, int tileY, int palette, const StringInfo &si, int bgmapIndex)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(bgmapIndex));
  for (int y = 0; y < si.getSize(); ++y) {
    if (tileY >= 20) {
      break;
    }
    bgmap[tileY * 32 + tileX] = (si.getTileIndex() + y) | BG_PALETTE(palette);
    ++tileY;
  }
}
