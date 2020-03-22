#ifndef REPLAY_HPP
#define REPLAY_HPP

#include "main.hpp"
#include "libsram_fs.hpp"
#include "libkeylog.hpp"

class Replay {
public:
  enum ReplayType {
    REPLAY_TYPE_NONE = 0,
    REPLAY_TYPE_LEVEL1,
    REPLAY_TYPE_LEVEL2,
    REPLAY_TYPE_LEVEL3,
    REPLAY_TYPE_LEVEL4,
  };

  class Header {
  public:
    Header(void) {}

    void saveToSRAM(SRAMFileSystem::FilePtr *ptr);
    static int getHeaderSize(void);
    void loadFromSRAM(SRAMFileSystem::FilePtr *ptr);

    void setType(ReplayType _type) { type = _type; }
    ReplayType getType(void) const { return type; }

    u8 getIsClear(void) const { return isClear; }
    u8 getStage(void) const { return stage; }
    u8 getLifeFrameSize(void) const { return lifeFrameSize; }
    u8 getLifeFrameHeart(void) const { return lifeFrameHeart; }
    u32 getPlayTime(void) const { return playTime; }

  private:
    ReplayType type;
    u8 isClear;
    u8 stage;
    u8 lifeFrameSize;
    u8 lifeFrameHeart;
    u32 playTime;
  };

  void initializeToSave(ReplayType _type);
  Replay::ReplayType saveToSRAM(void);

  void loadFromSRAM(SRAMFileSystem::FilePtr *ptr);

  static void getSavedReplay(SRAMFileSystem::FilePtr *ptr, const SRAMFileSystem &sramFS, ReplayType _type);

  int getRandSeed(void) { return randSeed; }
  void setRandSeed(int _randSeed);

  KeyLog keyLog;

private:
  bool isBestPlay(SRAMFileSystem::FilePtr *oldReplayPtr);
  void makeNewFileAndWriteToSRAM(int saveSize, ReplayType type);

  static u8 getCurrentIsClear(void);
  static u8 getCurrentStage(void);
  static u8 getCurrentLifeFrameSize(void);
  static u8 getCurrentLifeFrameHeart(void);
  static u32 getCurrentPlayTime(void);

  int randSeed;
  ReplayType type;
};

#endif
