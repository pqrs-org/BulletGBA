#include "libsram_fs.hpp"

SRAMFileSystem::SRAMFileSystem(u8 * const _baseaddr, const char *signature, FileMode _fileMode)
  : baseaddr(_baseaddr),
    cacheFileDescriptorInfo(*this),
    cacheNextBlockIndex(*this),
    fileMode(_fileMode)
{
  if (! checkHeader(signature)) {
    writeHeader(signature);

    // clear metadata
    cacheFileDescriptorInfo.clearSRAM();
    cacheNextBlockIndex.clearSRAM();
  } else {
    // load metadata cache
    cacheFileDescriptorInfo.loadFromSRAM();
    cacheNextBlockIndex.loadFromSRAM();
  }

  // ------------------------------------------------------------
  // set stackFreeBlock
  static bool blockUsedFlag[SRAM_BLOCK_NUM] EWRAM_DATA;
  for (int i = 0; i < BLOCK_INDEX_BODY; ++i) {
    blockUsedFlag[i] = true;
  }
  for (int i = BLOCK_INDEX_BODY; i < SRAM_BLOCK_NUM; ++i) {
    blockUsedFlag[i] = false;
  }
  for (int i = 0; i < SRAM_BLOCK_NUM; ++i) {
    int idx = cacheFileDescriptorInfo.get(i);
    while (isBlockIndexValid(idx) && idx != 0) {
      if (blockUsedFlag[idx]) {
        // loop detect. invalied block status!!
#ifdef SRAM_TEST
        printf("[ERROR] detect loop!!!\n");
#endif
        break;
      }
      blockUsedFlag[idx] = true;
      idx = cacheNextBlockIndex.get(idx);
    }
  }
  stackFreeBlock.initialize();
  for (int i = 0; i < SRAM_BLOCK_NUM; ++i) {
    if (blockUsedFlag[i] == false) {
      stackFreeBlock.push(i);
    }
  }
}


bool
SRAMFileSystem::checkHeader(const char *signature) const
{
  SRAMPtr p = getBlockAddr(BLOCK_INDEX_HEADER);

  // check signature
  for (int i = 0; i < SIGNATURE_MAXLEN; ++i) {
    if (p.read_u8() != signature[i]) {
      return false;
    }

    if (signature[i] == '\0') {
      break;
    }
  }

  // check majorVersion
  u8 majorVersion = p.read_u8();
  if (majorVersion != MAJOR_VERSION) {
    return false;
  }

  // check minorVersion
  u8 minorVersion = p.read_u8();
  if (minorVersion != MINOR_VERSION) {
    return false;
  }

  return true;
}

void
SRAMFileSystem::writeHeader(const char *signature)
{
  if (fileMode == FILEMODE_READONLY) {
    return;
  }

  SRAMPtr p = getBlockAddr(BLOCK_INDEX_HEADER);

  // write signature
  for (int i = 0; i < SIGNATURE_MAXLEN; ++i) {
    p.write_u8(signature[i]);
    if (signature[i] == '\0') {
      break;
    }
  }

  p.write_u8(MAJOR_VERSION);
  p.write_u8(MINOR_VERSION);
}


//////////////////////////////////////////////////////////////////////
bool
SRAMFileSystem::newFile(FilePtr *ptr, int saveSize)
{
  ptr->setNULL();

  int blockSize = calcBlockSize(saveSize);

  if (blockSize <= 0) {
    return false;
  }
  if (blockSize > stackFreeBlock.getSize()) {
    return false;
  }

  // Note: alloc by last blocks.

  int prevBlockIndex = 0;
  for (;;) {
    int blockIndex = stackFreeBlock.pop();
    --blockSize;

    // set nextBlockIndex
    cacheNextBlockIndex.set(blockIndex, prevBlockIndex);
    prevBlockIndex = blockIndex;

    if (blockSize == 0) {
      // set fileFirstIndex
      for (int i = 0; i < SRAM_BLOCK_NUM; ++i) {
        if (cacheFileDescriptorInfo.get(i) == 0) {
          FileDescriptor fd(i);
          cacheFileDescriptorInfo.set(i, blockIndex);
          ptr->initialize(this, fd);
          return true;
        }
      }
      return false;
    }
  }
}

void
SRAMFileSystem::deleteFile(const FilePtr &ptr)
{
  FileDescriptor fileDescriptor = ptr.getFileDescriptor();
  int blockIndex = cacheFileDescriptorInfo.get(fileDescriptor);

  // clear cacheFileDescriptorInfo
  cacheFileDescriptorInfo.set(fileDescriptor, 0);

  // clear nextBlockIndex
  while (isBlockIndexValid(blockIndex) && blockIndex != 0) {
    u8 next = cacheNextBlockIndex.get(blockIndex);

    stackFreeBlock.push(blockIndex);
    cacheNextBlockIndex.set(blockIndex, 0);

    blockIndex = next;
  }
}

// ------------------------------------------------------------
void
SRAMFileSystem::findFileFirstBlock(FilePtr *ptr, int start) const
{
  ptr->setNULL();

  if (start < 0) {
    return;
  }

  for (int i = start; i < SRAM_BLOCK_NUM; ++i) {
    int blockIndex = cacheFileDescriptorInfo.get(i);

    if (isBlockIndexValid(blockIndex) && blockIndex != 0) {
      ptr->initialize(this, i);
      return;
    }
  }
}

void
SRAMFileSystem::getFirstFile(FilePtr *ptr) const
{
  findFileFirstBlock(ptr, 0);
}

void
SRAMFileSystem::getNextFile(FilePtr *ptr) const
{
  if (! ptr->isNULL()) {
    findFileFirstBlock(ptr, ptr->getFileDescriptor() + 1);
  }
}

void
SRAMFileSystem::deleteAllFiles(void)
{
  FilePtr p;
  getFirstFile(&p);
  while (! p.isNULL()) {
    deleteFile(p);
    getNextFile(&p);
  }
}
