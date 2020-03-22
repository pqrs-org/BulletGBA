#ifndef LIBKEYLOG_HPP
#define LIBKEYLOG_HPP

#include "libsram_fs.hpp"

class KeyLog {
public:
  enum {
    // LISTKEYLOG_SIZE must be 2^x
    LISTKEYLOG_SIZE = 16384, // 4 min (60 * 60 * 4).
  };

  void resetIndex() {
    index = 0;
  }

  void succIndex() {
    index = (index + 1) & (LISTKEYLOG_SIZE - 1);
  }

  void push(u16 _pressKeyBit) {
    pressKeyBit[index] = _pressKeyBit;
    succIndex();
  }

  u16 shift() {
    u16 tmp = pressKeyBit[index];
    succIndex();
    return tmp;
  }

  int saveToSRAM(SRAMFileSystem::FilePtr *ptr);
  void loadFromSRAM(SRAMFileSystem::FilePtr *ptr);

private:
  u16 pressKeyBit[LISTKEYLOG_SIZE];
  int index;
};

#endif
