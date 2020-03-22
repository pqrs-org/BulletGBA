#ifndef FONTHANDLER_HPP
#define FONTHANDLER_HPP

#include <gba.h>

class FontHandler
{
public:
  class StringInfo {
  public:
    void initialize(void) {
      tileIndex = 0;
      size = 0;
    }

    int getTileIndex(void) const { return tileIndex; }
    int getSize(void) const { return size; }

    void setTileIndex(int _tileIndex) { tileIndex = _tileIndex; }
    void setSize(int _size) { size = _size; }

  private:
    int tileIndex;
    int size;
  };

  static void initialize(int _tileIndex, int _tileSize);
  static void makeString(StringInfo *si, int beginningBlankX, const char *str);
  static void makeStringVertical(StringInfo *si, int beginningBlankX, const char *str);
  static void drawString(int tileX, int tileY, int palette, const StringInfo &si, int bgmapIndex);
  static void drawStringVertical(int tileX, int tileY, int palette, const StringInfo &si, int bgmapIndex);

private:
  struct CharFontInfo {
    int leftPos;
    int rightPos;
  };
  static void getCharFontInfo(CharFontInfo *info, int c);
  static void drawDot(u32 *tileBase, int x, int y, int paletteIndex);

  static int tileIndex;
  static int tileEnd;
};

#endif
