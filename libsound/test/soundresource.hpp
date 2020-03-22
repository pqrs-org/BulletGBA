#ifndef SOUNDRESOURCE_HPP
#define SOUNDRESOURCE_HPP

#include "audiodef.hpp"

namespace SoundResource {
  enum {
    CPU_CLOCK = 16 * 1024 * 1024,
    AUDIO_RATE = 16384,
  };

  enum SoundIndex {
    MUSIC01,
    MUSIC02,
    MUSIC03,

    SE01,
    SE02,
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
    SOUNDINFO_INIT(music01, -2, true),
    SOUNDINFO_INIT(music02, -6, true),
    SOUNDINFO_INIT(music03, -6, true),

    SOUNDINFO_INIT(se01, 0, false),
    SOUNDINFO_INIT(se02, 0, false),
  };
}

#endif
