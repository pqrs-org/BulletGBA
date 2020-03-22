#include "imagehandler.hpp"

void
ImageHandler::setupSprite(void)
{
  u16 *vram = static_cast<u16 *>OBJ_BASE_ADR;

  vram = TILEINFO_spr_transparent::copyImage(vram);
  vram = TILEINFO_spr_bullet_thin::copyImage(vram);
  vram = TILEINFO_spr_bullet_small::copyImage(vram);
  vram = TILEINFO_spr_bullet_middle::copyImage(vram);
  vram = TILEINFO_spr_bullet_direction::copyImage(vram);
  vram = TILEINFO_spr_bullet_explode::copyImage(vram);
  vram = TILEINFO_spr_shot::copyImage(vram);
  vram = TILEINFO_spr_self::copyImage(vram);
  vram = TILEINFO_spr_explode_self::copyImage(vram);

  u16 *pal = OBJ_COLORS;
  pal = TILEINFO_spr_transparent::copyPalette(pal);
  pal = TILEINFO_spr_bullet_thin::copyPalette(pal);
  pal = TILEINFO_spr_bullet_slow::copyPalette(pal);
  pal = TILEINFO_spr_bullet_explode::copyPalette(pal);
  pal = TILEINFO_spr_shot::copyPalette(pal);
  pal = TILEINFO_spr_self::copyPalette(pal);
  pal = TILEINFO_spr_explode_self::copyPalette(pal);
}

void
ImageHandler::setupTile(void)
{
  u16 *vram = static_cast<u16 *>(CHAR_BASE_ADR(BGBASEADDR));

  vram = TILEINFO_bg_transparent::copyImage(vram);
  vram = TILEINFO_bg_background::copyImage(vram);

  vram = TILEINFO_bg_menu_logo::copyImage(vram);
  vram = TILEINFO_bg_menu_url::copyImage(vram);
  vram = TILEINFO_bg_menu_circle::copyImage(vram);
  vram = TILEINFO_bg_menu_leftarrow::copyImage(vram);
  vram = TILEINFO_bg_menu_rightarrow::copyImage(vram);

  vram = TILEINFO_bg_status_bullets::copyImage(vram);
  vram = TILEINFO_bg_status_jewel::copyImage(vram);
  vram = TILEINFO_bg_status_jewel_infinity::copyImage(vram);
  vram = TILEINFO_bg_status_miss::copyImage(vram);
  vram = TILEINFO_bg_status_time::copyImage(vram);

  vram = TILEINFO_bg_life_frame::copyImage(vram);
  vram = TILEINFO_bg_life_heart::copyImage(vram);
  vram = TILEINFO_bg_number::copyImage(vram);
  vram = TILEINFO_bg_replay::copyImage(vram);

  vram = TILEINFO_bg_result_border_bg::copyImage(vram);
  vram = TILEINFO_bg_result_border_top::copyImage(vram);
  vram = TILEINFO_bg_result_border_bottom::copyImage(vram);
  vram = TILEINFO_bg_result_gameover::copyImage(vram);
  vram = TILEINFO_bg_result_timeover::copyImage(vram);
  vram = TILEINFO_bg_result_clear::copyImage(vram);
  vram = TILEINFO_bg_result_bestplay::copyImage(vram);
  vram = TILEINFO_bg_result_pressA::copyImage(vram);
  vram = TILEINFO_bg_result_replaysaved::copyImage(vram);

  vram = TILEINFO_bg_boss_body::copyImage(vram);
  vram = TILEINFO_bg_boss_core_1::copyImage(vram);
  vram = TILEINFO_bg_boss_shield::copyImage(vram);

  u16 *pal = BG_COLORS;
  pal = TILEINFO_bg_transparent::copyPalette(pal);
  pal = TILEINFO_bg_background::copyPalette(pal);
  pal = TILEINFO_bg_font_white::copyPalette(pal);
  pal = TILEINFO_bg_font_red::copyPalette(pal);
  pal = TILEINFO_bg_font_green::copyPalette(pal);
  pal = TILEINFO_bg_result_replaysaved::copyPalette(pal);
  pal = TILEINFO_bg_result_timeover::copyPalette(pal);
  pal = TILEINFO_bg_boss_body::copyPalette(pal);
  pal = TILEINFO_bg_boss_body_damaged::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_1::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_2::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_3::copyPalette(pal);
  pal = TILEINFO_bg_boss_core_4::copyPalette(pal);
  pal = TILEINFO_bg_boss_shield::copyPalette(pal);
  pal = TILEINFO_bg_life_heart::copyPalette(pal);

  initializeBGMAP_BG();
}

void
ImageHandler::initializeBGMAP_BG(void)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(BGMAP_INDEX_BG));
  for (int i = 0; i < 32 * 32; ++i) {
    *bgmap++ = ImageResource::getTileIndex<ImageResource::BG_BACKGROUND>::value | BG_PALETTE(BGCOLOR_GRAY);
  }
}

void
ImageHandler::clearBGMAP(int mapBaseAdr)
{
  u16 *bgmap = static_cast<u16 *>(MAP_BASE_ADR(mapBaseAdr));
  for (int i = 0; i < 32 * 32; ++i) {
    *bgmap++ = ImageResource::getTileIndex<ImageResource::BG_TRANSPARENT>::value;
  }
}

void
ImageHandler::drawBGMenuCircle(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_CIRCLE>::value,
            TILEINFO_bg_menu_circle::w,
            TILEINFO_bg_menu_circle::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGMenuLeftArrow(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_LEFTARRAW>::value,
            TILEINFO_bg_menu_leftarrow::w,
            TILEINFO_bg_menu_leftarrow::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGMenuRightArrow(int x, int y, int palette)
{
  drawImage(x, y, ImageResource::getTileIndex<ImageResource::BG_MENU_RIGHTARRAW>::value,
            TILEINFO_bg_menu_rightarrow::w,
            TILEINFO_bg_menu_rightarrow::h,
            palette,
            BGMAP_INDEX_MENU_TEXT);
}

void
ImageHandler::drawBGReplay(void)
{
  drawImage(28, 20 - TILEINFO_bg_replay::h, ImageResource::getTileIndex<ImageResource::BG_REPLAY>::value,
            TILEINFO_bg_replay::w,
            TILEINFO_bg_replay::h,
            BGCOLOR_FONT_GREEN,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGStatusJewel(void)
{
  drawImage(29, 0, ImageResource::getTileIndex<ImageResource::BG_STATUS_JEWEL>::value,
            TILEINFO_bg_status_jewel::w,
            TILEINFO_bg_status_jewel::h,
            BGCOLOR_FONT_WHITE,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGStatusJewelInfinity(void)
{
  drawImage(29, 4, ImageResource::getTileIndex<ImageResource::BG_STATUS_JEWEL_INFINITY>::value,
            TILEINFO_bg_status_jewel_infinity::w,
            TILEINFO_bg_status_jewel_infinity::h,
            BGCOLOR_FONT_GREEN,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGStatusBullets(void)
{
  drawImage(28, 12, ImageResource::getTileIndex<ImageResource::BG_STATUS_BULLETS>::value,
            TILEINFO_bg_status_bullets::w,
            TILEINFO_bg_status_bullets::h,
            BGCOLOR_FONT_WHITE,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGStatusMiss(void)
{
  drawImage(29, 15, ImageResource::getTileIndex<ImageResource::BG_STATUS_MISS>::value,
            TILEINFO_bg_status_miss::w,
            TILEINFO_bg_status_miss::h,
            BGCOLOR_FONT_WHITE,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGStatusTime(void)
{
  drawImage(29, 10, ImageResource::getTileIndex<ImageResource::BG_STATUS_TIME>::value,
            TILEINFO_bg_status_time::w,
            TILEINFO_bg_status_time::h,
            BGCOLOR_FONT_WHITE,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultBorder(void)
{
  for (int i = 0; i < 20; ++i) {
    drawImage(12, i, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_BOTTOM>::value,
              TILEINFO_bg_result_border_bottom::w,
              TILEINFO_bg_result_border_bottom::h,
              BGCOLOR_GRAY,
              BGMAP_INDEX_GAME_STATUS);
    for (int x = 13; x < 18; ++x) {
      drawImage(x, i, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_BG>::value,
                TILEINFO_bg_result_border_bg::w,
                TILEINFO_bg_result_border_bg::h,
                BGCOLOR_GRAY,
                BGMAP_INDEX_GAME_STATUS);
    drawImage(18, i, ImageResource::getTileIndex<ImageResource::BG_RESULT_BORDER_TOP>::value,
              TILEINFO_bg_result_border_top::w,
              TILEINFO_bg_result_border_top::h,
              BGCOLOR_GRAY,
              BGMAP_INDEX_GAME_STATUS);
    }
  }
}

void
ImageHandler::drawBGResultPressA(void)
{
  drawImage(13, (20 - TILEINFO_bg_result_pressA::h) / 2,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_PRESSA>::value,
            TILEINFO_bg_result_pressA::w,
            TILEINFO_bg_result_pressA::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultGameOver(void)
{
  drawImage(16, (20 - TILEINFO_bg_result_gameover::h) / 2,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_GAMEOVER>::value,
            TILEINFO_bg_result_gameover::w,
            TILEINFO_bg_result_gameover::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultTimeOver(void)
{
  drawImage(1, 12, ImageResource::getTileIndex<ImageResource::BG_RESULT_TIMEOVER>::value,
            TILEINFO_bg_result_timeover::w,
            TILEINFO_bg_result_timeover::h,
            BGCOLOR_RESULT_TIMEOVER,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultClear(void)
{
  drawImage(15, (20 - TILEINFO_bg_result_clear::h) / 2,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_CLEAR>::value,
            TILEINFO_bg_result_clear::w,
            TILEINFO_bg_result_clear::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultBestPlay(void)
{
  drawImage(15, (20 - TILEINFO_bg_result_bestplay::h) / 2,
            ImageResource::getTileIndex<ImageResource::BG_RESULT_BESTPLAY>::value,
            TILEINFO_bg_result_bestplay::w,
            TILEINFO_bg_result_bestplay::h,
            BGCOLOR_GRAY,
            BGMAP_INDEX_GAME_STATUS);
}

void
ImageHandler::drawBGResultReplaySaved(void)
{
  drawImage(1, 10, ImageResource::getTileIndex<ImageResource::BG_RESULT_REPLAYSAVED>::value,
            TILEINFO_bg_result_replaysaved::w,
            TILEINFO_bg_result_replaysaved::h,
            BGCOLOR_RESULT_REPLAYSAVED,
            BGMAP_INDEX_GAME_STATUS);
}
