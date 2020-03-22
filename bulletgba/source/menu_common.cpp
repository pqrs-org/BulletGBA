#include "menu_common.hpp"
#include "imagehandler.hpp"
#include "fonthandler.hpp"
#include "soundhandler.hpp"
#include "main.hpp"
#include "libgbakey.hpp"

FontHandler::StringInfo MenuCommon::si_version;
int MenuCommon::mosaicSize;

void
MenuCommon::initialize(void)
{
  FontHandler::initialize(ImageResource::getTileIndex<ImageResource::END_OF_BG>::value, 30);
  FontHandler::makeStringVertical(&si_version, 0, MainInfo::versionString);

  drawLogo();
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_MENU_TEXT);

  setMosaic();
}

void
MenuCommon::initialize_fonthandler(void)
{
  FontHandler::initialize(si_version.getTileIndex() + si_version.getSize(), 300);
}

void
MenuCommon::drawLogo(void)
{
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_MENU_LOGO);

  ImageHandler::drawImage(26, 1, ImageResource::getTileIndex<ImageResource::BG_MENU_LOGO>::value,
                          TILEINFO_bg_menu_logo::w,
                          TILEINFO_bg_menu_logo::h,
                          ImageHandler::BGCOLOR_GRAY,
                          ImageHandler::BGMAP_INDEX_MENU_LOGO);

  ImageHandler::drawImage(0, 0, ImageResource::getTileIndex<ImageResource::BG_MENU_URL>::value,
                          TILEINFO_bg_menu_url::w,
                          TILEINFO_bg_menu_url::h,
                          ImageHandler::BGCOLOR_GRAY,
                          ImageHandler::BGMAP_INDEX_MENU_LOGO);

  FontHandler::drawStringVertical(25, 12, ImageHandler::BGCOLOR_FONT_WHITE, si_version, ImageHandler::BGMAP_INDEX_MENU_LOGO);
}

void
MenuCommon::clearAllText(void)
{
  ImageHandler::clearBGMAP(ImageHandler::BGMAP_INDEX_MENU_TEXT);
}

void
MenuCommon::playSE_click(void)
{
  SoundHandler::playSE(SoundResource::SE_MENU_CLICK);
}

void
MenuCommon::playSE_select(void)
{
  SoundHandler::playSE(SoundResource::SE_MENU_SELECT);
}

void
MenuCommon::playSE_changepage(void)
{
  SoundHandler::playSE(SoundResource::SE_MENU_CHANGEPAGE);
}

void
MenuCommon::playSE_cancel(void)
{
  SoundHandler::playSE(SoundResource::SE_MENU_CANCEL);
}

void
MenuCommon::loop_initialize(void)
{
  if ((! SoundHandler::isMusicPlaying()) ||
      (SoundHandler::getMusicIndex() != SoundResource::MUSIC_MENU)) {
    SoundHandler::playMusic(SoundResource::MUSIC_MENU, false);
  }

  SetMode(MODE_0 | BG0_ON | BG1_ON | BG2_ON);
  setMosaic();

  REG_BG0CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR | BG_MOSAIC |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_MENU_TEXT);

  REG_BG1CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_MENU_LOGO);

  REG_BG2CNT = BG_SIZE_0 | BG_PRIORITY(3) | BG_16_COLOR |
    CHAR_BASE(ImageHandler::BGBASEADDR) | SCREEN_BASE(ImageHandler::BGMAP_INDEX_BG);

  initialize_fonthandler();

  BG0HOFS = 0;
  BG0VOFS = 0;
  BG1HOFS = 0;
  BG1VOFS = 0;
  BG2HOFS = 0;
  BG2VOFS = 0;

  SetInterrupt(IE_VBL, irq_vblank);
  EnableInterrupt(IE_VBL);

  // reset Key Status
  VBlankIntrWait();
  GBAKey::scanKeys();
  GBAKey::getKeysDown();
  GBAKey::getKeysHeld();
  VBlankIntrWait();
}

void
MenuCommon::loop_terminate(void)
{
  DisableInterrupt(IE_VBL);
}

void
MenuCommon::irq_vblank(void)
{
  static int bgoffset = 0;
  bgoffset = (bgoffset + 1) & 0xf;
  BG2HOFS = (bgoffset / 2);

  mosaicSize -= (mosaicSize > 0);
  int size = mosaicSize / (MOSAIC_SIZE / 4);
  REG_MOSAIC = (size << 4) | size;

  SoundHandler::irq_vblank();
}


void
MenuCommon::setMosaic(void)
{
  mosaicSize = MOSAIC_SIZE;
}
