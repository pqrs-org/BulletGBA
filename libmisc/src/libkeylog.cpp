#include <gba_types.h>
#include "libkeylog.hpp"

// ------------------------------------------------------------
/**
 * Save with Compress.
 *   Compression Algorithm: AAAABBCCC -> A4B2C3
 *
 * @param[in] sram SRAM address (if NULL, calc write byte count only)
 *
 * @return write byte count.
 */

int
KeyLog::saveToSRAM(SRAMFileSystem::FilePtr *ptr)
{
  int writeNum = 0;

  u8 count;
  u16 prevPressKeyBit;

  u16 *p = pressKeyBit;
  u16 *end = pressKeyBit + index;
  while (p < end) {
    count = 0;
    prevPressKeyBit = *p;
    while (*p == prevPressKeyBit && count < 0xff && p < end) {
      ++count;
      ++p;
    }

    if (ptr) {
      ptr->write_u8(count);
      ptr->write_u16(prevPressKeyBit);
    }
    writeNum += 1 + 2;
  }
  // set last item's count = 0;
  if (ptr) {
    ptr->write_u8(0);
  }
  writeNum += 1;

  return writeNum;
}

void
KeyLog::loadFromSRAM(SRAMFileSystem::FilePtr *ptr)
{
  resetIndex();

  int num = 0;
  for (;;) {
    u8 count = ptr->read_u8();
    if (count == 0) {
      break;
    }

    u16 key = ptr->read_u16();
    for (u32 i = 0; i < count; ++i) {
      push(key);

      ++num;
      if (num >= LISTKEYLOG_SIZE) {
        break;
      }
    }
  }

  resetIndex();
}
