#ifndef LIBGBAKEY_HPP
#define LIBGBAKEY_HPP

#include <gba_input.h>

class GBAKey {
public:
  static void initialize(void) {
    up = 0;
    down = 0;
    held = 0;
    last = 0;
  }

  // Note: It'd be usually recommended to read-out REG_KEYINPUT only once per frame.

  static u16 getPressKeyBit_REG_KEYINPUT(void) {
    return (REG_KEYINPUT & 0x03ff) ^ 0x03ff;
  }

  static void scanKeys(void) {
    scanKeys(getPressKeyBit_REG_KEYINPUT());
  }

  static void scanKeys(u16 keysHeld) {
    last = held;
    held = keysHeld;

    u16 pressed = held & ( last ^ 0x03ff);
    down |= pressed;

    u16 released = ((held ^ 0x03ff) & last);
    up |= released;

    down &= ~released;
    up &= ~pressed;
  }

  static u16 getKeysDown(void) {
    u16 tmp = down;
    down = 0;
    return tmp;
  }

  static u16 getKeysUp(void) {
    u16 tmp = up;
    up = 0;

    return tmp;
  }

  static u16 getKeysHeld(void) {
    return held;
  }

private:
  static u16 up;
  static u16 down;
  static u16 held;
  static u16 last;
};

#endif
