#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libsram_fs.hpp"

u8 SRAMbuf[32 * 1024];

void
saveToFile(const char *filename) {
  FILE *fp = fopen(filename, "w");
  fwrite(SRAMbuf, sizeof(SRAMbuf), 1, fp);
  fclose(fp);
}

void
readFromFile(const char *filename) {
  FILE *fp = fopen(filename, "r");
  if (fp) {
    fread(SRAMbuf, sizeof(SRAMbuf), 1, fp);
    fclose(fp);
  }
}

template<int _blockNum>
bool
writeOneFile(SRAMFileSystem *sramFS) {
  //printf("writeOneFile\n");

  u8 writeBuf[256 * _blockNum];
  for (u32 i = 0; i < sizeof(writeBuf) / 8; ++i) {
    memset(writeBuf + i * 8, i, 8);
  }

  writeBuf[0] = _blockNum;

  SRAMFileSystem::FilePtr p;
  sramFS->newFile(&p, sizeof(writeBuf));
  if (p.isNULL()) {
    return false;
  }

  for (u32 i = 0; i < sizeof(writeBuf); ++i) {
    p.write_u8(writeBuf[i]);
  }

  return true;
}

void
printFileSize(const SRAMFileSystem &sramFS) {
  SRAMFileSystem::FilePtr p;

  sramFS.getFirstFile(&p);
  while (! p.isNULL()) {
    int size = p.read_u8();

    if (p.getBlockSize() != size) {
      printf("[ERROR] getFileBlockSize\n");
    }
    printf("read_u8 = %d\n", size);

    sramFS.getNextFile(&p);
  }
}

void
outputFileDataToFile(const SRAMFileSystem &sramFS, const char *filename) {
  SRAMFileSystem::FilePtr p;

  u8 readBuf[32 * 1024];
  u8 *buf = readBuf;

  sramFS.getFirstFile(&p);

  u32 size = p.read_u8() * SRAMFileSystem::SRAM_BLOCK_SIZE;
  for (u32 i = 0; i < size; ++i) {
    *buf++ = p.read_u8();
  }

  FILE *fp = fopen(filename, "w");
  fwrite(readBuf, size, 1, fp);
  fclose(fp);
}

void
deleteFileByBlockSize(SRAMFileSystem *sramFS, int blockSize) {
  SRAMFileSystem::FilePtr p;
  sramFS->getFirstFile(&p);

  while (! p.isNULL()) {
    if (p.read_u8() == blockSize) {
      sramFS->deleteFile(p);
    }
    sramFS->getNextFile(&p);
  }
}


int
main(int argc, char **argv)
{
  if (argc == 1) {
    printf("Usage\n");
    printf("1) FULLWRITE Test\n");
    printf("     %s a\n", argv[0]);
    printf("2) ONEFILE Test\n");
    printf("     %s b\n", argv[0]);
    printf("3) DELTEST Test\n");
    printf("     %s c\n", argv[0]);
    printf("4) MISC-OPERATION Test\n");
    printf("     %s d\n", argv[0]);
    printf("5) calc freeSize Test\n");
    printf("     %s e file.sav\n", argv[0]);
    return 0;
  }

  memset(SRAMbuf, 0xff, sizeof(SRAMbuf));

  SRAMFileSystem sramFS(SRAMbuf, "testMOGEMOGE");
  saveToFile("test-init.sav");

  int dataSize[] = {0, 1, 128, 256, 257, 512, 128 * 1024, -1};
  for (int i = 0; dataSize[i] != -1; ++i) {
    printf("blocksize(%d) = %d\n", dataSize[i], sramFS.calcBlockSize(dataSize[i]));
  }

  if (writeOneFile<512>(&sramFS) == true) {
    printf("[ERROR] filesize check invalid \n");
  }

  switch (*(argv[1])) {
    case 'a':
      // full-write
    {
      printf("FULLWRITE\n");

      writeOneFile<2>(&sramFS);
      writeOneFile<3>(&sramFS);
      writeOneFile<1>(&sramFS);
      writeOneFile<1>(&sramFS);
      writeOneFile<4>(&sramFS);
      writeOneFile<1>(&sramFS);

      while (writeOneFile<16>(&sramFS))
        ;
      saveToFile("test-fullwrite.sav");

      SRAMFileSystem sramFS(SRAMbuf, "testMOGEMOGE");
      saveToFile("test-loadcheck.sav");

      printFileSize(sramFS);
    }
    break;

    case 'b':
      // one-file
    {
      printf("ONEFILE\n");

      writeOneFile<2>(&sramFS);

      saveToFile("test-onefile.sav");

      outputFileDataToFile(sramFS, "test-onefile.raw");
      printFileSize(sramFS);
    }
    break;

    case 'c':
      // delete-test
    {
      printf("DELTEST\n");

      int initialFreeBlocks = sramFS.getFreeBlockSize();

      printf("free = %d\n", initialFreeBlocks);

      writeOneFile<2>(&sramFS);
      printf("free = %d\n", sramFS.getFreeBlockSize());
      writeOneFile<3>(&sramFS);
      printf("free = %d\n", sramFS.getFreeBlockSize());
      writeOneFile<1>(&sramFS);
      printf("free = %d\n", sramFS.getFreeBlockSize());
      writeOneFile<1>(&sramFS);
      printf("free = %d\n", sramFS.getFreeBlockSize());
      writeOneFile<4>(&sramFS);
      printf("free = %d\n", sramFS.getFreeBlockSize());

      saveToFile("test-deltest-internal.sav");

      while (writeOneFile<16>(&sramFS))
        ;

      printf("free = %d\n", sramFS.getFreeBlockSize());

      deleteFileByBlockSize(&sramFS, 1); // 1 * 3 blocks will be delete.
      deleteFileByBlockSize(&sramFS, 2); // 2 * 1 blocks will be delete.

      if (writeOneFile<5>(&sramFS) == false) {
        printf("[ERROR] fragment write error\n");
      }
      saveToFile("test-fragment.sav");

      deleteFileByBlockSize(&sramFS, 3);
      deleteFileByBlockSize(&sramFS, 4);
      deleteFileByBlockSize(&sramFS, 5);
      deleteFileByBlockSize(&sramFS, 16);

      printf("free = %d\n", sramFS.getFreeBlockSize());
      if (sramFS.getFreeBlockSize() != initialFreeBlocks) {
        printf("[ERROR] anywhere in delete\n");
      }

      saveToFile("test-deltest.sav");

      printFileSize(sramFS);

      writeOneFile<2>(&sramFS);
      writeOneFile<3>(&sramFS);
      writeOneFile<1>(&sramFS);
      writeOneFile<1>(&sramFS);
      writeOneFile<4>(&sramFS);
      writeOneFile<100>(&sramFS);
      printf("free = %d (before deleteAllFiles)\n", sramFS.getFreeBlockSize());
      sramFS.deleteAllFiles();
      printf("free = %d (after deleteAllFiles)\n", sramFS.getFreeBlockSize());
    }
    break;

    case 'd':
      // misc-operation
    {
      printf("MISC-OPERATION\n");
      writeOneFile<2>(&sramFS);

      SRAMFileSystem::FilePtr p;
      sramFS.getFirstFile(&p);

      u8 buf[SRAMFileSystem::SRAM_BLOCK_SIZE * 2];
      for (u32 i = 0; i < sizeof(buf); ++i) {
        buf[i] = p.read_u8();
      }
      sramFS.getFirstFile(&p);
      for (u32 i = 0; i < sizeof(buf); ++i) {
        p.rewind();
        p.succ(i);
        if (buf[i] != p.read_u8()) {
          printf("[ERROR] succ \n");
        }
      }
    }
    break;

    case 'e':
    {
      printf("calc freeSize\n");

      readFromFile(argv[2]);
      SRAMFileSystem sramFS(SRAMbuf, "testMOGEMOGE");
      int freeBlock = sramFS.getFreeBlockSize();
      printf("FreeBlockSize = %d\n", freeBlock);
    }
    break;

    default:
      printf("%c IS NOT SUPPORTED\n", *(argv[1]));
      break;
  }
  return 0;
}
