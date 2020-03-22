#ifndef LIBEFFECT_HPP
#define LIBEFFECT_HPP

#include "libcommon.hpp"

template <int _OAM_INDEX, int _OBJ_PRIORITY, int _OBJ_PALETTE, int _SPRITE_SHAPE, int _SPRITE_SIZE,
          int _WIDTH, int _HEIGHT,
          int _OBJTILE_INDEX, int _OBJTILE_SIZE, int _PATTERN_SIZE,
          int _EFFECT_FRAMES_PER_PATTERN>
class Effect {
public:
  enum Params {
    EFFECT_TIME_MAX = _EFFECT_FRAMES_PER_PATTERN * _PATTERN_SIZE,
  };

  void initialize(void) {
    time = 0;
  }

  void setup(int _posx, int _posy) {
    posx = _posx;
    posy = _posy;
    time = EFFECT_TIME_MAX;
  }

  void step(void) {
    if (time > 0) {
      --time;
      OBJATTR * const p = OAM + _OAM_INDEX;
      if (time == 0) {
        // erase effect
        p->attr0 = Common::SCREEN_SIZE_Y;
      } else {
        int pattern = _OBJTILE_INDEX + (time / _EFFECT_FRAMES_PER_PATTERN) * _OBJTILE_SIZE;

        p->attr0 = (posy & 0xff) | _SPRITE_SHAPE;
        p->attr1 = (posx & 0x1ff) | _SPRITE_SIZE;
        p->attr2 = OBJ_PRIORITY(_OBJ_PRIORITY) | OBJ_PALETTE(_OBJ_PALETTE) | pattern;
      }
    }
  }

  bool isAlive(void) const { return time > 0; }
  int getWidth(void) const { return _WIDTH; }
  int getHeight(void) const { return _HEIGHT; }
  bool isFirstFrame(void) const { return time == EFFECT_TIME_MAX; }
  int getLife(void) const { return time; }

  int getPosX(void) const { return posx; }
  int getPosY(void) const { return posy; }

private:
  int posx;
  int posy;
  int time;
};

#endif
