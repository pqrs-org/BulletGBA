#include <string.h>
#include "soundhandler.hpp"

int
main(void)
{
#ifdef SET_WAITCNT
  // Set ROM WAITCNT
  *((volatile u16 *)0x04000204) = 0x4317;
#endif
  InitInterrupt();
  REG_SOUNDCNT_X = 0;

  SetMode(MODE_0 | BG0_ON);

  SoundHandler::initialize();

  SetInterrupt(IE_VBL, SoundHandler::irq_vblank);
  EnableInterrupt(IE_VBL);

  SoundHandler::playMusic(SoundResource::MUSIC01);

  for (;;) {
    ScanKeys();
    u16 keys = KeysDown();
    if (keys & KEY_UP) {
      SoundHandler::playMusic(SoundResource::MUSIC01);
    }
    if (keys & KEY_DOWN) {
      SoundHandler::playMusic(SoundResource::MUSIC02);
    }
    if (keys & KEY_LEFT) {
      SoundHandler::playMusic(SoundResource::MUSIC03);
    }
    if (keys & KEY_RIGHT) {
      SoundHandler::stopMusic();
    }

    if (keys & KEY_A) {
      SoundHandler::playSE(SoundResource::SE01);
    }
    if (keys & KEY_B) {
      SoundHandler::playSE(SoundResource::SE02);
    }

    VBlankIntrWait();
  }
}
