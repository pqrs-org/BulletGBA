#include <string.h>
#include "fonthandler.hpp"
#include "fontdata.hpp"
#include "simplestring.hpp"
#include "tilerotate.hpp"

void
setupTile(void)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(0));
  for (int i = 0; i < 32 * 32; ++i) {
    *bgmap++ = 0;
  }

  u16 *pal = BG_COLORS;
  memset(pal, 0, 16);
  pal += 16;
  pal = TILEINFO_fontdata::copyPalette(pal);
}

int
main(void)
{
#ifdef SET_WAITCNT
  // Set ROM WAITCNT
  *((volatile u16 *)0x04000204) = 0x4317;
#endif
  InitInterrupt();
  REG_SOUNDCNT_X = 0;

  setupTile();

  int bgmapIndex = 31;

  SetMode(MODE_0 | BG0_ON);
  REG_BG0CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(0) | SCREEN_BASE(bgmapIndex);

  int fontTileIndex = 1;
  int fontTileSize = 30 * 20; // (240 / 8) * (160 / 8) == 30 * 20.
  FontHandler::initialize(fontTileIndex, fontTileSize);

  int palette = 1;
  FontHandler::StringInfo si;

  const char *message[] = {
    "** FontHandler Test **",
    "",
    "http://gba.pqrs.org/",
    "",
    "[ Combine test ] http, credits",
    "[ NUMBER ] 0123456789",
    "[ LOWER ] abcdefghijklmnopqrstuvwxyz",
    "[ UPPER ] ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    "[ SYMBOL ] ,_.!@#&$%^`~\"'*()-+=[]<>?/\\",
    "hard",
    "",
    "",
    NULL,
  };
  int y = 1;
  for (int i = 0; message[i] != NULL; ++i) {
    FontHandler::makeString(&si, 2, message[i]);
    FontHandler::drawString(0, y, palette, si, bgmapIndex);
    ++y;
  }

  int x = 29;
  for (int i = 0; message[i] != NULL; ++i) {
    FontHandler::makeStringVertical(&si, 2, message[i]);
    FontHandler::drawStringVertical(x, 0, palette, si, bgmapIndex);
    --x;
  }

  SimpleString<128> line;
  line.initialize();
  line.append("SimpleString Test ");
  line.append(2, 1);
  line.append(':');
  line.append(30, 2);
  line.append(':');
  line.append(54, 2);
  FontHandler::makeString(&si, 2, line.c_str());
  FontHandler::drawString(0, 18, palette, si, bgmapIndex);

  EnableInterrupt(IE_VBL);
  for (;;) {
    VBlankIntrWait();
  }
}
