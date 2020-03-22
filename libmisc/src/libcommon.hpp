#ifndef COMMON_HPP
#define COMMON_HPP

#include <gba.h>

class Common {
public:
  enum Params {
    NUM_SPRITE = 128,
    SCREEN_SIZE_X = 240,
    SCREEN_SIZE_Y = 160,
  };

  static void irqFuncDummy(void) {}

  static void initializeSprites(void) {
    u32 i;

    for (i = 0; i < NUM_SPRITE; ++i) {
      OAM[i].attr0 = SCREEN_SIZE_Y;  //y to > 159
      OAM[i].attr1 = SCREEN_SIZE_X;  //x to > 239
      OAM[i].attr2 = 0;
    }
  }
};

#endif
