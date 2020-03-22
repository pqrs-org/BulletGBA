#ifndef LIBSRAM_FS_HPP
#define LIBSRAM_FS_HPP

#include <stdio.h>
#include "libsram_ptr.hpp"
#include "libstack.hpp"

/**
 * SRAM format
 *
 * split 64 Kbyte SRAM to 256 byte blocks (256 blocks)
 *
 * block[0]: signature, majorVersion, minorVersion
 * block[1]: FileDescriptorInfo (blockIndex of firstBlock)
 * block[2]: nextBlockIndex
 * block[3] - block[255]: data
 */

class SRAMFileSystem {
public:
  enum ConfigurationParams {
    MAJOR_VERSION = 1,
    MINOR_VERSION = 0,

    SIGNATURE_MAXLEN = 32,

    SRAM_TOTAL_SIZE = 32768, // 256Kbit
    SRAM_BLOCK_SIZE = 256, // must be 2^x
  };

  enum InternalParams {
    SRAM_BLOCK_NUM = SRAM_TOTAL_SIZE / SRAM_BLOCK_SIZE,

    BLOCK_INDEX_HEADER = 0,
    BLOCK_INDEX_FILE_FIRST_INDEX = 1,
    BLOCK_INDEX_NEXT_BLOCK_INDEX = 2,
    BLOCK_INDEX_BODY = 3,
  };
  BOOST_STATIC_ASSERT(static_cast<int>(SRAM_BLOCK_NUM) <= static_cast<int>(SRAM_BLOCK_SIZE));

  enum PublicParams {
    MAX_FILE_NUM = SRAM_BLOCK_NUM,
    MAX_FILE_SIZE = (SRAM_BLOCK_NUM - BLOCK_INDEX_BODY) * SRAM_BLOCK_SIZE,
  };

  enum FileMode {
    FILEMODE_READWRITE,
    FILEMODE_READONLY,
  };

  class FileDescriptor {
  public:
    FileDescriptor(void) : value(-1) {}
    FileDescriptor(int _value) : value(_value) {}

    operator int() const { return value; }

  private:
    int value;
  };

  class FilePtr {
    friend class SRAMFileSystem;

  public:
    FilePtr(void) { setNULL(); }

    bool isNULL(void) const { return ptr.isNULL(); }

    void rewind(void) {
      if (parent != NULL) {
        int blockIndex = parent->cacheFileDescriptorInfo.get(fileDescriptor);
        setPtr(blockIndex);
      }
    }

    void succ(int num) {
      if (parent != NULL) {
        for (int i = 0; i < num; ++i) {
          ptr +=1;
          normalize();
        }
      }
    }

    void write_u8(u8 data) {
      if (parent == NULL) {
        return;
      }
      if (parent->getFileMode() == FILEMODE_READONLY) {
        return;
      }
      if (ptr.isNULL()) {
        return;
      }
      ptr.write_u8(data);
      normalize();
    }
    void write_u16(u16 data) {
      write_u8((data >> 0) & 0xff);
      write_u8((data >> 8) & 0xff);
    }
    void write_u32(u32 data) {
      write_u8((data >> 0) & 0xff);
      write_u8((data >> 8) & 0xff);
      write_u8((data >> 16) & 0xff);
      write_u8((data >> 24) & 0xff);
    }

    u8 read_u8(void) {
      if (ptr.isNULL()) {
        return 0;
      }
      u8 data = ptr.read_u8();
      normalize();

      return data;
    }
    u16 read_u16(void) {
      u16 data = read_u8();
      data |= (read_u8() << 8);
      return data;
    }
    u32 read_u32(void) {
      u32 data = read_u8();
      data |= (read_u8() << 8);
      data |= (read_u8() << 16);
      data |= (read_u8() << 24);
      return data;
    }

    int getBlockSize(void) const {
      if (parent == NULL) {
        return 0;
      }

      int blockIndex = parent->cacheFileDescriptorInfo.get(fileDescriptor);
      int size = 0;
      while (parent->isBlockIndexValid(blockIndex) && blockIndex != 0) {
        ++size;
        blockIndex = parent->cacheNextBlockIndex.get(blockIndex);
      }
      return size;
    }

  private:
    const SRAMFileSystem *parent; // parent SRAMFileSystem
    SRAMPtr ptr; // working ptr
    SRAMPtr basePtr; // block base ptr
    u8 nextBlockIndex;
    u8 fileDescriptor;

    void initialize(const SRAMFileSystem *_parent, FileDescriptor fd) {
      parent = _parent;
      if (parent == NULL) {
        setNULL();
        return;
      }
      fileDescriptor = fd;

      rewind();
    }

    int getFileDescriptor(void) const { return fileDescriptor; }

    void setNULL(void) {
      parent = NULL;
      ptr = SRAMPtr(NULL);
      basePtr = ptr;
      nextBlockIndex = 0;
      fileDescriptor = 0;
    }

    void normalize(void) {
      if (ptr - basePtr == SRAM_BLOCK_SIZE) {
        if (nextBlockIndex == 0) {
          setNULL();
        } else {
          setPtr(nextBlockIndex);
        }
      }
    }

    void setPtr(int blockIndex) {
      if (parent == NULL) {
        return;
      }

      if (parent->isBlockIndexValid(blockIndex)) {
        ptr = parent->getBlockAddr(blockIndex);
        basePtr = ptr;
        nextBlockIndex = parent->cacheNextBlockIndex.get(blockIndex);
      } else {
        setNULL();
      }
    }
  };

  template <int _BLOCK_INDEX>
  class Cache {
  public:
    Cache(const SRAMFileSystem &_parent) : parent(_parent) {}

    void loadFromSRAM(void) {
      SRAMPtr p = parent.getBlockAddr(_BLOCK_INDEX);

      for (int i = 0; i < SRAM_BLOCK_SIZE; ++i) {
        data[i] = p.read_u8();
      }
    }
    void clearSRAM(void) {
      if (parent.getFileMode() == FILEMODE_READONLY) {
        return;
      }

      SRAMPtr p = parent.getBlockAddr(_BLOCK_INDEX);

      for (int i = 0; i < SRAM_BLOCK_SIZE; ++i) {
        p.write_u8(0);
        data[i] = 0;
      }
    }

    int get(int index) const {
      if (0 <= index && index < SRAM_BLOCK_SIZE) {
        return data[index];
      } else {
        return -1;
      }
    }

    void set(int index, u8 value) {
      if (0 <= index && index < SRAM_BLOCK_SIZE) {
        // set cache
        data[index] = value;

        if (parent.getFileMode() == FILEMODE_READONLY) {
          return;
        }

        // write SRAM
        SRAMPtr p = parent.getBlockAddr(_BLOCK_INDEX) + index;
        p.write_u8(value);
      }
    }

  private:
    const SRAMFileSystem &parent;
    u8 data[SRAM_BLOCK_SIZE];
  };


  ////////////////////////////////////////////////////////////////////////////////
  SRAMFileSystem(u8 * const _baseaddr, const char *signature, FileMode _fileMode = FILEMODE_READWRITE);

  /**
   * Allocate new file.
   *
   * @param[out] ptr result FilePtr
   * @param[in] saveSize filesize (byte).
   *
   * @return true if newFile succeed.
   */
  bool newFile(FilePtr *ptr, int saveSize);
  /**
   * Delete file
   *
   * @param[in] ptr target FilePtr
   */
  void deleteFile(const FilePtr &ptr);

  void getFirstFile(FilePtr *ptr) const;
  void getNextFile(FilePtr *ptr) const;

  int getFreeBlockSize(void) const {
    return stackFreeBlock.getSize();
  }

  u32 calcBlockSize(u32 dataSize) const {
    if ((dataSize & (SRAM_BLOCK_SIZE - 1)) == 0) {
      return dataSize / SRAM_BLOCK_SIZE;
    } else {
      return dataSize / SRAM_BLOCK_SIZE + 1;
    }
  }

  // utils
  void deleteAllFiles(void);

private:
  u8 * const baseaddr;

  Cache<BLOCK_INDEX_FILE_FIRST_INDEX> cacheFileDescriptorInfo;
  Cache<BLOCK_INDEX_NEXT_BLOCK_INDEX> cacheNextBlockIndex;

  Stack<u8, SRAM_BLOCK_NUM> stackFreeBlock;
  FileMode fileMode;

  // ------------------------------------------------------------
  bool checkHeader(const char *signature) const;
  void writeHeader(const char *signature);

  bool isBlockIndexValid(int blockIndex) const {
    return 0 <= blockIndex && blockIndex < SRAM_BLOCK_NUM;
  }
  u8 *getBlockAddr(int index) const {
    return baseaddr + SRAM_BLOCK_SIZE * index;
  }

  // ------------------------------------------------------------
  void findFileFirstBlock(FilePtr *ptr, int start) const;
  FileMode getFileMode(void) const { return fileMode; }
};

#endif
