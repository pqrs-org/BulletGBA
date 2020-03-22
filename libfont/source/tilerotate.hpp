#ifndef TILEROTATE_HPP
#define TILEROTATE_HPP

namespace TileRotate {
  inline void tileRotate270(int tileIndex) {
    u32 *tileBase = static_cast<u32 *>(MAP_BASE_ADR(0)) + (tileIndex * 8);

    u32 newLine[8];
    u32 *p = newLine;
    *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0;
    *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0;

    for (int y = 0; y < 8; ++y) {
      u32 tile = tileBase[y];
      int shift = (7 - y) * 4;
      for (int x = 0; x < 8; ++x) {
        newLine[x] |= ((tile & 0xf) << shift);
        tile >>= 4;
      }
    }

    for (int y = 0; y < 8; ++y) {
      tileBase[y] = newLine[y];
    }
  }
};

#endif
