#ifndef BOSSCORE_HPP
#define BOSSCORE_HPP

#include "bullet.hpp"
#include "stepfunc.hpp"

template <int _TILEX, int _TILEY, int _BGMAP_INDEX>
class BossCore {
public:
  enum {
#if 1
    BOSS_SHIELD_LIFE = 128, // must be 2^x
    BOSS_SHIELD_NUM = 7,

    BOSS_CORE_LIFE = 64,
    BOSS_CORE_PATTERN = 3,
#else
    BOSS_SHIELD_LIFE = 64, // must be 2^x
    BOSS_SHIELD_NUM = 7,

    BOSS_CORE_LIFE = 2,
    BOSS_CORE_PATTERN = 3,
#endif

    BOSS_LIFE = BOSS_SHIELD_LIFE * BOSS_SHIELD_NUM + BOSS_CORE_LIFE * BOSS_CORE_PATTERN,
  };

  void initialize(void) {
    shieldLife = BOSS_SHIELD_LIFE * BOSS_SHIELD_NUM;
    coreLife = BOSS_CORE_LIFE * BOSS_CORE_PATTERN;

    displayedShieldNum = -1;
    displayedCorePattern = -1;

    drawShield();
    drawCore();
  }

  bool isAlive(void) const {
    return coreLife > 0;
  }

  void kill(void) {
    coreLife = 0;
  }

  int getBorderPosX(void) const {
    return (_TILEX - 2) * 8 + 16 + 2 - ((ImageHandler::OBJPIXEL_WIDTH_BOSS_SHIELD - 2) / BOSS_SHIELD_NUM) * displayedShieldNum;
  }

  bool isHitY(int shotCenter) const {
    const int center = getCenterPosY();
    const int min = center - 16;
    const int max = center + 16;

    return static_cast<u32>(shotCenter - min) < static_cast<u32>(max - min);
  }

  bool hitCheck(int shotCenterY) {
    if (isHitY(shotCenterY)) {
      const int center = getCenterPosY();
      if (displayedShieldNum > 0) {
        const int posx = getBorderPosX() - ImageHandler::OBJPIXEL_WIDTH_BULLET / 2;
        makeBossHitEffect(posx, center - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2);
        makeBossHitEffect(posx, center - 8 - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2);
        makeBossHitEffect(posx, center + 8 - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2);
      } else {
        const int posx = getCenterPosX() - ImageHandler::OBJPIXEL_WIDTH_BULLET / 2;
        makeBossHitEffect(posx, center - ImageHandler::OBJPIXEL_HEIGHT_BULLET / 2);
      }

      succDamage();

      return true;
    }

    return false;
  }

  const int getShieldNum(void) const {
    return (shieldLife + BOSS_SHIELD_LIFE - 1) / BOSS_SHIELD_LIFE;
  }

  const int getCorePattern(void) const {
    return (coreLife + BOSS_CORE_LIFE - 1) / BOSS_CORE_LIFE;
  }

  const int getCenterPosX(void) const {
    return _TILEX * 8 + ImageHandler::OBJPIXEL_WIDTH_BOSS_CORE / 2;
  }

  const int getCenterPosY(void) const {
    return _TILEY * 8 + ImageHandler::OBJPIXEL_HEIGHT_BOSS_CORE / 2;
  }

  int getLife(void) const { return shieldLife + coreLife; }

private:
  void succDamage(void) {
    if (shieldLife > 0) {
      --shieldLife;
      drawShield();
    } else {
      coreLife -= (coreLife > 0);
      drawCore();
    }
  }

  void drawCore(void) {
    int corePattern = getCorePattern();
    if (displayedCorePattern == corePattern) {
      return;
    }
    displayedCorePattern = corePattern;

    for (int i = 0; i < 2; ++i) {
      ImageHandler::drawImage(_TILEX, _TILEY,
                              ImageResource::getTileIndex<ImageResource::BG_BOSS_CORE>::value,
                              TILEINFO_bg_boss_core_1::w,
                              TILEINFO_bg_boss_core_1::h,
                              ImageHandler::BGCOLOR_BOSS_CORE_1 + corePattern,
                              _BGMAP_INDEX + i);
    }
  }

  void drawShield(void) {
    int shieldNum = getShieldNum();
    if (displayedShieldNum == shieldNum) {
      return;
    }
    displayedShieldNum = shieldNum;

    for (int i = 0; i < 2; ++i) {
      const int tileIndex = ImageResource::getTileIndex<ImageResource::BG_BOSS_SHIELD>::value +
        (TILEINFO_bg_boss_shield::size / ImageHandler::BGTILE_BOSS_SHIELD_PATTERN) * shieldNum;
      ImageHandler::drawImage(_TILEX - 2, _TILEY,
                              tileIndex,
                              TILEINFO_bg_boss_shield::w,
                              TILEINFO_bg_boss_shield::h / ImageHandler::BGTILE_BOSS_SHIELD_PATTERN,
                              ImageHandler::BGCOLOR_BOSS_SHIELD,
                              _BGMAP_INDEX + i);
    }
  }

  void makeBossHitEffect(int posx, int posy) const {
    BulletInfo *bi = ListBullets::makeNewBullet();
    if (bi) {
      posx += (FixedPointNum::random().getRawValue() & 0x7) - 4;
      posy += (FixedPointNum::random().getRawValue() & 0x7) - 4;
      bi->initialize(BULLET_TYPE_HIDDEN, posx, posy, 0, 0, StepFunc::effectHitStepFuncList);
    }
  }

  int shieldLife;
  int coreLife;
  int displayedShieldNum;
  int displayedCorePattern;
};

#endif
