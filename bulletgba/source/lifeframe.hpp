#ifndef LIFEFRAME_HPP
#define LIFEFRAME_HPP

#include "imagehandler.hpp"

class LifeFrame {
public:
  enum {
    MAXLIFE = 10,
  };

  void initialize(int _life) {
    counter = 0;
    size = _life;
    life = _life;
  }

  void step(void) {
    const int posx = 28;
    const int posy = 1;
    u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(ImageHandler::BGMAP_INDEX_GAME_STATUS));
    bgmap += posy * 32 + posx;

    int pattern = (counter >> 2) & 0x7;
    for (int i = 0; i < size; ++i) {
      if (i < life) {
        *bgmap = (ImageResource::getTileIndex<ImageResource::BG_LIFE_HEART>::value + pattern) | BG_PALETTE(ImageHandler::BGCOLOR_LIFE);
      } else {
        *bgmap = (ImageResource::getTileIndex<ImageResource::BG_LIFE_FRAME>::value) | BG_PALETTE(ImageHandler::BGCOLOR_LIFE);
      }
      bgmap += 32;
    }

    ++counter;
  }

  void extend(void) {
    life += (life < MAXLIFE);
    if (life > size) {
      size = life;
    }
  }

  void miss(void) {
    life -= (life > 0);
  }

  int getSize(void) const { return size; }
  int getLife(void) const { return life; }

private:
  int counter;
  int size;
  int life;
};

#endif
