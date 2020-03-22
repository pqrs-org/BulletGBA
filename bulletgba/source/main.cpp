#include "gameengine.hpp"
#include "imagehandler.hpp"
#include "soundhandler.hpp"
#include "menu_common.hpp"
#include "main.hpp"

#include "demoplaysavedata.h"

EWRAM_DATA SRAMFileSystem MainInfo::sramFS_SRAM(reinterpret_cast<u8 *>(SRAM), sramSignature, SRAMFileSystem::FILEMODE_READWRITE);
EWRAM_DATA SRAMFileSystem MainInfo::sramFS_DemoPlayData(const_cast<u8 *>(demoplaysavedata), sramSignature, SRAMFileSystem::FILEMODE_READONLY);

int
main(void) {
#ifdef SET_WAITCNT
  // Set ROM WAITCNT
  *((volatile u16 *)0x04000204) = 0x4317;
#endif
  InitInterrupt();
  REG_SOUNDCNT_X = 0;

  // rand-seed
  init_genrand(0);

  GBAKey::initialize();

  ImageHandler::setupTile();
  ImageHandler::setupSprite();

  SoundHandler::initialize();
  MenuCommon::initialize();

  GameEngine::doMainMenu();
};
