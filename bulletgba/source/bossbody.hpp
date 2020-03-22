#ifndef BOSSBODY_HPP
#define BOSSBODY_HPP

template <int _BGMAP_INDEX>
class BossBody {
public:
  enum {
    // ALPHA_STEP_FRAME_COUNT must be 2^x
    ALPHA_STEP_FRAME_COUNT = 8,

    BOSS_DAMAGE_EFFECT_TIME = 10,

    BOSS_VIBRATE_EFFECT_FRAMES_PER_PATTERN = 2,
    BOSS_VIBRATE_EFFECT_PATTERN = 16,
    BOSS_VIBRATE_EFFECT_MAGNITUDE = 4,
  };

  void initialize(void) {
    damageEffectTime = 0;
    vibrateEffectTime = 0;
    alphaCounter = 16 * ALPHA_STEP_FRAME_COUNT;

    REG_BLDCNT = BIT(2) | BIT(6) | BIT(11);
    REG_BLDALPHA = (0xf << 9) | 0;

    drawTile();
  }

  void setDamageEffect(void) {
    damageEffectTime = BOSS_DAMAGE_EFFECT_TIME;
  }

  void setVibrateEffect(void) {
    vibrateEffectTime = BOSS_VIBRATE_EFFECT_FRAMES_PER_PATTERN * BOSS_VIBRATE_EFFECT_PATTERN;
  }

  bool isVibrateEffect(void) const {
    return vibrateEffectTime > 0;
  }

  bool isBossEnabled(void) const {
    return alphaCounter == 0;
  }

  void step(void) {
    int posx = 0;
    int posy = 0;

    if (damageEffectTime > 0) {
      --damageEffectTime;
      posx = 256;
    }
    if (vibrateEffectTime > 0) {
      --vibrateEffectTime;
      const int pattern = BOSS_VIBRATE_EFFECT_PATTERN - (vibrateEffectTime / BOSS_VIBRATE_EFFECT_FRAMES_PER_PATTERN);
      const int posxSwing = (pattern & 0x1) * BOSS_VIBRATE_EFFECT_MAGNITUDE - (BOSS_VIBRATE_EFFECT_MAGNITUDE / 2);
      const int posySwing = ((pattern & 0x3) < 2) * BOSS_VIBRATE_EFFECT_MAGNITUDE - (BOSS_VIBRATE_EFFECT_MAGNITUDE / 2);
      posx = posxSwing;
      posy += posySwing;
    }

    BG2HOFS = (posx & 0x1ff);
    BG2VOFS = (posy & 0x1ff);

    // BG2 & BG3 alpha
    if (alphaCounter > 0) {
      --alphaCounter;
      if (alphaCounter == 0) {
        REG_BLDCNT = 0;
      } else {
        REG_BLDALPHA = (0xf << 9) | (0xf - (alphaCounter / ALPHA_STEP_FRAME_COUNT));
      }
    }
  }

private:
  void drawTile(void) const {
    for (int idx = 0; idx < 2; ++idx) {
      int palette = ImageHandler::BGCOLOR_BOSS_BODY + idx;
      ImageHandler::drawImage(23, 5, ImageResource::getTileIndex<ImageResource::BG_BOSS_BODY>::value,
                              TILEINFO_bg_boss_body::w,
                              TILEINFO_bg_boss_body::h,
                              palette,
                              _BGMAP_INDEX + idx);
    }
  }

  int damageEffectTime;
  int vibrateEffectTime;

  int alphaCounter;
};

#endif
