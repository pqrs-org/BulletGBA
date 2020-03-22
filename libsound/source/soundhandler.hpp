#ifndef SOUNDHANDLER_HPP
#define SOUNDHANDLER_HPP

#include <gba.h>
#include "boost/static_assert.hpp"

#include "soundresource.hpp"

template <bool USE_FIFO_A>
class SoundCore {
public:
  enum Action {
    ACTION_DONOTHING = 0,
    ACTION_START,
    ACTION_STOP,
    ACTION_PLAYING,
  };

  void initialize(void) {
    action = ACTION_DONOTHING;
    index = static_cast<SoundResource::SoundIndex>(0);
    counter = 0;

    irqfunc_setDMAStop();

    if (USE_FIFO_A) {
      REG_TM0CNT_L = 0xffff - (SoundResource::CPU_CLOCK / SoundResource::AUDIO_RATE);
    } else {
      REG_TM1CNT_L = 0xffff - (SoundResource::CPU_CLOCK / SoundResource::AUDIO_RATE);
    }
  }

  void play(SoundResource::SoundIndex _index, bool _isIntro) {
    // !! set ACTION_DONOTHING first !!
    // for irq_vblank calling while this function.
    action = ACTION_DONOTHING;

    index = _index;
    isIntro = _isIntro;

    // now irq_vblank ready. set ACTION_START.
    action = ACTION_START;
  }

  void stop(void) {
    action = ACTION_STOP;
  }

  void irq_vblank(void) {
    if (action == ACTION_START) {
      action = ACTION_PLAYING;
      irqfunc_actionStart();
      return;

    } else if (action == ACTION_STOP) {
      action = ACTION_DONOTHING;
      irqfunc_actionStop();
      return;

    } else if (action == ACTION_PLAYING) {
      --counter;
      if (counter <= 0) {
        if (irqfunc_isLoop()) {
          if (isIntro) {
            index = SoundResource::SoundIndex(index + 1);
            isIntro = false;
          }
          irqfunc_actionStart();
        } else {
          action = ACTION_DONOTHING;
          irqfunc_actionStop();
        }
      }
    }
  }

  SoundResource::SoundIndex getIndex(void) const { return index; }
  bool isPlaying(void) const { return action == ACTION_PLAYING; }

private:
  void irqfunc_setDMAStart(void) {
    if (USE_FIFO_A) {
      DMA1COPY(SoundResource::listSoundInfo[index].data, &REG_FIFO_A, DMA_SPECIAL | DMA32 | DMA_REPEAT | DMA_SRC_INC | DMA_DST_FIXED);
    } else {
      DMA2COPY(SoundResource::listSoundInfo[index].data, &REG_FIFO_B, DMA_SPECIAL | DMA32 | DMA_REPEAT | DMA_SRC_INC | DMA_DST_FIXED);
    }
    irqfunc_setTimerStart();
  }

  void irqfunc_setDMAStop(void) {
    irqfunc_setTimerStop();

    if (USE_FIFO_A) {
      REG_DMA1CNT = 0;
    } else {
      REG_DMA2CNT = 0;
    }
  }

  void irqfunc_setTimerStart(void) {
    if (USE_FIFO_A) {
      REG_TM0CNT_H = TIMER_START;
    } else {
      REG_TM1CNT_H = TIMER_START;
    }
  }

  void irqfunc_setTimerStop(void) {
    if (USE_FIFO_A) {
      REG_TM0CNT_H = 0;
    } else {
      REG_TM1CNT_H = 0;
    }
  }

  void irqfunc_setSoundRegStart(void) {
    if (USE_FIFO_A) {
      REG_SOUNDCNT_H |= (SNDA_R_ENABLE | SNDA_L_ENABLE | SNDA_RESET_FIFO);
    } else {
      REG_SOUNDCNT_H |= (SNDB_R_ENABLE | SNDB_L_ENABLE | SNDB_RESET_FIFO);
    }
  }

  void irqfunc_setSoundRegStop(void) {
    if (USE_FIFO_A) {
      REG_SOUNDCNT_H &= ~(SNDA_R_ENABLE | SNDA_L_ENABLE);
    } else {
      REG_SOUNDCNT_H &= ~(SNDB_R_ENABLE | SNDB_L_ENABLE);
    }
  }

  void irqfunc_actionStop(void) {
    irqfunc_setSoundRegStop();
    irqfunc_setDMAStop();
    index = static_cast<SoundResource::SoundIndex>(0);
    counter = 0;
  }

  void irqfunc_actionStart(void) {
    counter = SoundResource::listSoundInfo[index].playFrameSize;
    irqfunc_setDMAStop();
    irqfunc_setDMAStart();
    irqfunc_setSoundRegStart();
  }

  bool irqfunc_isLoop(void) const {
    return SoundResource::listSoundInfo[index].loopFlag;
  }

  volatile Action action;
  volatile SoundResource::SoundIndex index;
  int counter;
  bool isIntro;
};


class SoundHandler {
public:
  static void initialize(void) {
    soundCoreMusic.initialize();
    soundCoreSE.initialize();

    REG_SOUNDCNT_X = (1<<7);
    REG_SOUNDCNT_L = 0;
    REG_SOUNDCNT_H =
      SNDA_RESET_FIFO |
      SNDB_RESET_FIFO |
      SNDA_VOL_100 |
      SNDB_VOL_100 |
      (0 << 10) | // SNDA_TIMER0
      (1 << 14);  // SNDB_TIMER1

    BOOST_STATIC_ASSERT((SoundResource::CPU_CLOCK / SoundResource::AUDIO_RATE) < 0xffff);
  }

  static void terminate() {
    REG_SOUNDCNT_X = 0;
  }

  static void irq_vblank(void) {
    soundCoreMusic.irq_vblank();
    soundCoreSE.irq_vblank();
  }

  static void playMusic(SoundResource::SoundIndex _index, bool _isIntro) {
    soundCoreMusic.play(_index, _isIntro);
  }
  static void stopMusic(void) {
    soundCoreMusic.stop();
  }

  static void playSE(SoundResource::SoundIndex _index) {
    soundCoreSE.play(_index, false);
  }
  static void stopSE(void) {
    soundCoreSE.stop();
  }

  static SoundResource::SoundIndex getMusicIndex(void) { return soundCoreMusic.getIndex(); }
  static SoundResource::SoundIndex getSEIndex(void) { return soundCoreSE.getIndex(); }
  static bool isMusicPlaying(void) { return soundCoreMusic.isPlaying(); }
  static bool isSEPlaying(void) { return soundCoreSE.isPlaying(); }

private:
  static SoundCore<true> soundCoreMusic;
  static SoundCore<false> soundCoreSE;
};

#endif
