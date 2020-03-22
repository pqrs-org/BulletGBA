#ifndef SOUNDRESOURCE_HPP
#define SOUNDRESOURCE_HPP

#include <gba.h>
#include "audiodef.hpp"
#include "boost/static_assert.hpp"

namespace SoundResource {
  enum {
    CPU_CLOCK = 16 * 1024 * 1024,
    AUDIO_RATE = 16384,
  };

  enum SoundIndex {
    MUSIC_MENU,
    MUSIC_NORMAL,
    MUSIC_SHOOTING_INTRO,
    MUSIC_SHOOTING_LOOP,
    MUSIC_CHALLENGE_INTRO,
    MUSIC_CHALLENGE_LOOP,
    MUSIC_RESULT,

    SE_MENU_SELECT,
    SE_MENU_CLICK,
    SE_MENU_CHANGEPAGE,
    SE_MENU_CANCEL,

    SE_SHOT_HIT,
    SE_TOGGLE_SLOW_MODE,

    SE_EXPLODE_SELF,
    SE_EXPLODE_BOSS_SHIELD,

    SE_BOSS_DESTROY_VIBRATION,
    SE_BOSS_DESTROY_EXPLODE,
  };

  template <int filesize, int adjust> struct getPlayFrameSize {
    enum {
      value = filesize * 60 / AUDIO_RATE + adjust,
    };
    BOOST_STATIC_ASSERT(value > 0);
  };

  struct SoundInfo {
    const char *data;
    const int playFrameSize;
    const bool loopFlag;
  };

#define SOUNDINFO_INIT(NAME, ADJUST, LOOP) {_binary_##NAME##_raw_start, getPlayFrameSize<_filesize_##NAME##_raw, ADJUST>::value, LOOP}
  const SoundInfo listSoundInfo[] = {
    SOUNDINFO_INIT(music_menu, -3, true),
    SOUNDINFO_INIT(music_normal, -3, true),
    SOUNDINFO_INIT(music_shooting_intro, 0, true),
    SOUNDINFO_INIT(music_shooting_loop, -10, true),
    SOUNDINFO_INIT(music_challenge_intro, -3, true),
    SOUNDINFO_INIT(music_challenge_loop, -8, true),
    SOUNDINFO_INIT(music_result, -21, true),

    SOUNDINFO_INIT(se_menu_select, 0, false),
    SOUNDINFO_INIT(se_menu_click, 0, false),
    SOUNDINFO_INIT(se_menu_changepage, 0, false),
    SOUNDINFO_INIT(se_menu_cancel, 0, false),

    SOUNDINFO_INIT(se_shot_hit, 0, false),
    SOUNDINFO_INIT(se_toggle_slow_mode, 0, false),

    SOUNDINFO_INIT(se_explode_self, 0, false),
    SOUNDINFO_INIT(se_explode_boss_shield, 0, false),

    SOUNDINFO_INIT(se_boss_destroy_vibration, 0, true),
    SOUNDINFO_INIT(se_boss_destroy_explode, -2, false),
  };
}

#endif
