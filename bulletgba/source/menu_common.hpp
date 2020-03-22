#ifndef MENU_COMMON_HPP
#define MENU_COMMON_HPP

#include <gba.h>
#include "fonthandler.hpp"

class MenuCommon
{
public:
  enum {
    // MOSAIC_SIZE must be 2^x && MOSAIC_SIZE >= 4
    MOSAIC_SIZE = 16,
  };

  static void initialize(void);

  static void initialize_fonthandler(void);

  static void clearAllText(void);

  static void playSE_click(void);
  static void playSE_select(void);
  static void playSE_changepage(void);
  static void playSE_cancel(void);

  static void loop_initialize(void);
  static void loop_terminate(void);

  static void irq_vblank(void);

  static void setMosaic(void);

private:
  static void drawLogo(void);

  static FontHandler::StringInfo si_version;
  static int mosaicSize;
};

#endif
