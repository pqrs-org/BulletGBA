#include <gba.h>
#include "gameparams.hpp"
#include "gameengine.hpp"
#include "fixed.hpp"
#include "replay.hpp"

void
Replay::Header::saveToSRAM(SRAMFileSystem::FilePtr *ptr)
{
  MainInfo::seekFileBody(ptr);

  ptr->write_u8(type);
  ptr->write_u8(getCurrentIsClear());
  ptr->write_u8(getCurrentStage());
  ptr->write_u8(getCurrentLifeFrameSize());
  ptr->write_u8(getCurrentLifeFrameHeart());
  ptr->write_u32(getCurrentPlayTime());
}

int
Replay::Header::getHeaderSize(void)
{
  return 1 +
    1 + 1 + 1 + 1 +
    4 + 4;
}

void
Replay::Header::loadFromSRAM(SRAMFileSystem::FilePtr *ptr)
{
  MainInfo::seekFileBody(ptr);

  type = static_cast<ReplayType>(ptr->read_u8());
  isClear = ptr->read_u8();
  stage = ptr->read_u8();
  lifeFrameSize = ptr->read_u8();
  lifeFrameHeart = ptr->read_u8();
  playTime = ptr->read_u32();
}


void
Replay::initializeToSave(ReplayType _type)
{
  setRandSeed(genrand_int31());
  type = _type;

  keyLog.resetIndex();
}

Replay::ReplayType
Replay::saveToSRAM(void)
{
  // calc saveSize
  int saveSize =
    MainInfo::FILEHEADER_SIZE
    + Header::getHeaderSize()
    + 4 // randSeed
    + keyLog.saveToSRAM(NULL);

  if (saveSize > SRAMFileSystem::MAX_FILE_SIZE) {
    // too large.
    return REPLAY_TYPE_NONE;
  }

  // check old replay
  SRAMFileSystem::FilePtr p;
  getSavedReplay(&p, MainInfo::sramFS_SRAM, type);
  if (p.isNULL() || isBestPlay(&p)) {
    if (! p.isNULL()) {
      MainInfo::sramFS_SRAM.deleteFile(p);
    }
    makeNewFileAndWriteToSRAM(saveSize, type);
    return type;
  }

  return REPLAY_TYPE_NONE;
}

void
Replay::loadFromSRAM(SRAMFileSystem::FilePtr *ptr)
{
  Header header;

  header.loadFromSRAM(ptr);
  setRandSeed(ptr->read_u32());
  keyLog.loadFromSRAM(ptr);
}

void
Replay::setRandSeed(int _randSeed)
{
  randSeed = _randSeed;
  init_genrand(randSeed);
}

void
Replay::getSavedReplay(SRAMFileSystem::FilePtr *ptr, const SRAMFileSystem &sramFS, ReplayType _type)
{
  for (sramFS.getFirstFile(ptr); ! ptr->isNULL(); sramFS.getNextFile(ptr)) {
    if (MainInfo::readFileType(ptr) != MainInfo::FILETYPE_REPLAY) {
      continue;
    }

    Replay::Header savedHeader;
    savedHeader.loadFromSRAM(ptr);
    if (savedHeader.getType() == _type) {
      return;
    }
  }
}

bool
Replay::isBestPlay(SRAMFileSystem::FilePtr *savedReplayPtr)
{
  Replay::Header savedHeader;
  savedHeader.loadFromSRAM(savedReplayPtr);

  u8 isClear = getCurrentIsClear();
  if (isClear > savedHeader.getIsClear()) {
    return true;
  } else if (isClear < savedHeader.getIsClear()) {
    return false;
  }

  if (! isClear) {
    u8 stage = getCurrentStage();
    if (stage > savedHeader.getStage()) {
      return true;
    } else if (stage < savedHeader.getStage()) {
      return false;
    }
  }

  u8 life = getCurrentLifeFrameHeart();
  if (life > savedHeader.getLifeFrameHeart()) {
    return true;
  } else if (life < savedHeader.getLifeFrameHeart()) {
    return false;
  }
  u8 lifesize = getCurrentLifeFrameSize();
  if (lifesize > savedHeader.getLifeFrameSize()) {
    return true;
  } else if (lifesize < savedHeader.getLifeFrameSize()) {
    return false;
  }

  u32 time = getCurrentPlayTime();
  if (time <= savedHeader.getPlayTime()) {
    return true;
  } else {
    return false;
  }
}

void
Replay::makeNewFileAndWriteToSRAM(int saveSize, ReplayType type)
{
  SRAMFileSystem::FilePtr p;
  Header header;

  header.setType(type);

  MainInfo::sramFS_SRAM.newFile(&p, saveSize);
  writeFileType(&p, MainInfo::FILETYPE_REPLAY);
  header.saveToSRAM(&p);
  p.write_u32(randSeed);
  keyLog.saveToSRAM(&p);
}

u8
Replay::getCurrentIsClear(void)
{
  return ! GameParams::bossCore.isAlive();
}

u8
Replay::getCurrentStage(void)
{
  return GameEngine::getStage();
}

u8
Replay::getCurrentLifeFrameSize(void)
{
  return GameParams::lifeFrame.getSize();
}

u8
Replay::getCurrentLifeFrameHeart(void)
{
  return GameParams::lifeFrame.getLife();
}

u32
Replay::getCurrentPlayTime(void)
{
  return GameEngine::getPlayTime().toInt();
}
