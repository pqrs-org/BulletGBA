#ifndef MAIN_HPP
#define MAIN_HPP

#include "boost/static_assert.hpp"
#include "libsram_fs.hpp"

namespace MainInfo {
  const char * const versionString = "Version 5.0";
  const char * const sramSignature = "BULLETGBA SAVE FORMAT 5.0";
  extern SRAMFileSystem sramFS_SRAM;
  extern SRAMFileSystem sramFS_DemoPlayData;

  enum FileType {
    FILETYPE_ERROR = 0,
    FILETYPE_REPLAY = 1,
  };
  const int FILEHEADER_SIZE = 1;
  inline FileType readFileType(SRAMFileSystem::FilePtr *ptr) {
    if (! ptr->isNULL()) {
      ptr->rewind();
      return static_cast<FileType>(ptr->read_u8());
    }
    return FILETYPE_ERROR;
  }
  inline void writeFileType(SRAMFileSystem::FilePtr *ptr, FileType type) {
    if (! ptr->isNULL()) {
      ptr->rewind();
      ptr->write_u8(type);
    }
  }
  inline void seekFileBody(SRAMFileSystem::FilePtr *ptr) {
    if (! ptr->isNULL()) {
      ptr->rewind();
      ptr->succ(1); // filetype
    }
  }
};

#endif
