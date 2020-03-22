#ifndef SPRITEDOUBLER_HPP
#define SPRITEDOUBLER_HPP

#include <gba.h>
#include <string.h>
#include "libcommon.hpp"
#include "boost/static_assert.hpp"

class SpriteDoubler {
public:
  enum Params {
    OFFSET_Y = 8, // SpriteDoubler handle from -OFFSET_Y to Common::SPRITE_POSY_MAX

    LINEBLOCK = 4,
    NUM_BLOCK = (Common::SCREEN_SIZE_Y + OFFSET_Y) / LINEBLOCK,

    MAXITEM = 512,

    DOUBLER_SPRITE_START = 2,
    MAX_SPRITE = 120,

    COMPILED_OBJATTR_NUM = 2, // double buffer
  };

  static void initialize(void) {
    REG_DMA0CNT = 0;
    REG_DMA3CNT = 0;

    for (int i = 0; i < MAX_SPRITE; ++i) {
      zeroclearObjattr[i].attr0 = Common::SCREEN_SIZE_Y;
      zeroclearObjattr[i].attr1 = Common::SCREEN_SIZE_X;
    }
    currentCompiledObjattr = compiledObjattr;
    for (int i = 0; i < COMPILED_OBJATTR_NUM; ++i) {
      compiledObjattr[i].initialize(sortedOBJATTR[i]);
      compiledObjattr[i].initializePerFrame();
    }
    isCompileDone = false;
    resetFrameSkipCount();
  }

  static void resetFrameSkipCount(void) {
    frameSkipCount = 0;
  }

  static int getFrameSkipCount(void) {
    return frameSkipCount;
  }

  // ------------------------------------------------------------
  static void irq_vcount(void) {
    CompiledObjattr *p = currentCompiledObjattr;

    int index = *(p->nextIdx);
    if (index >= NUM_BLOCK) {
      return;
    }

    int num = p->itemNumInBlock[index];
    int num2 = 0;

    int alivenum = p->dstStart - (OAM + DOUBLER_SPRITE_START);
    if (alivenum + num >= MAX_SPRITE) {
      int newNum = MAX_SPRITE - alivenum;
      num2 = num - newNum;
      num = newNum;
    }

    OBJATTR *srcStart = p->objattrStartPosInBlock[index];
    if (num > 0) {
      DMA0COPY(srcStart, p->dstStart, DMA32 | DMA_IMMEDIATE | (num * sizeof(OBJATTR) / 4));
      srcStart += num;
      p->dstStart += num;
    }

    if (num2 > 0) {
      DMA3COPY(srcStart, OAM + DOUBLER_SPRITE_START,
               DMA32 | DMA_IMMEDIATE | (num2 * sizeof(OBJATTR) / 4));
      p->dstStart = OAM + DOUBLER_SPRITE_START + num2;
    }

    ++(p->nextIdx);
    int vcount = p->getAlignedPosYByBlockIdx(*(p->nextIdx)) - LINEBLOCK;
    REG_DISPSTAT = (REG_DISPSTAT & 0xff) | VCOUNT(vcount);
  }
  static void irq_vblank(void) {
    frameSkipCount += ! isCompileDone;

    if (isCompileDone) {
      isCompileDone = false;
      switchCurrentCompiledObjattr();
    }

    CompiledObjattr *p = currentCompiledObjattr;

    p->dstStart = OAM + DOUBLER_SPRITE_START;
    OBJATTR *srcStart = p->objattrStartPosInBlock[0];

    // Copy First
    int size = p->firstCopySize;
    if (size > 0) {
      DMA0COPY(srcStart, p->dstStart, DMA32 | DMA_IMMEDIATE | (size * sizeof(OBJATTR) / 4));
      p->dstStart += size;
    }
    // ZeroClear rest of OAM.
    if (size < MAX_SPRITE) {
      DMA3COPY(zeroclearObjattr, p->dstStart, DMA32 | DMA_IMMEDIATE | ((MAX_SPRITE - size) * sizeof(OBJATTR) / 4));
    }

    p->nextIdx = p->itemContainIdx;
    int vcount = p->getAlignedPosYByBlockIdx(*(p->nextIdx)) - LINEBLOCK;
    REG_DISPSTAT = (REG_DISPSTAT & 0xff) | VCOUNT(vcount);
  }

  class CompiledObjattr {
  public:
    int itemNumInBlock[NUM_BLOCK];

    // to make sortedOBJATTR
    OBJATTR *sortedOBJATTR;
    OBJATTR *objattrStartPosInBlock[NUM_BLOCK];
    int registNumOnSorted[NUM_BLOCK];

    // for irq_vcount
    OBJATTR *dstStart;

    int firstCopySize;
    int itemContainIdx[NUM_BLOCK + 1]; // last item must be NUM_BLOCK for guard.
    int *nextIdx;

    void initialize(OBJATTR *_sortedOBJATTR) {
      sortedOBJATTR = _sortedOBJATTR;

      // initialize objattrStartPosInBlock first though it is set each every frame.
      for (int i = 0; i < NUM_BLOCK; ++i) {
        objattrStartPosInBlock[i] = sortedOBJATTR;
      }

      initializePerFrame();
    }

    void initializePerFrame() {
      memset(itemNumInBlock, 0, sizeof(itemNumInBlock));
      memset(registNumOnSorted, 0, sizeof(registNumOnSorted));

      firstCopySize = 0;
      itemContainIdx[0] = NUM_BLOCK;
      nextIdx = itemContainIdx;
    }

    // posy must be < Common::SCREEN_SIZE_Y.
    void registItemNumInBlock(int posy) {
      int idx = (posy + OFFSET_Y) / LINEBLOCK;
      ++(itemNumInBlock[idx]);
    }

    void normalizeItemNumInBlock() {
      for (int i = 0; i < NUM_BLOCK; ++i) {
        if (itemNumInBlock[i] > MAX_SPRITE) {
          itemNumInBlock[i] = MAX_SPRITE;
        }
      }
    }

    void makeObjAttrStartPosInBlock() {
      objattrStartPosInBlock[0] = sortedOBJATTR;
      for (int i = 0; i < NUM_BLOCK - 1; ++i) {
        objattrStartPosInBlock[i + 1] = objattrStartPosInBlock[i] + itemNumInBlock[i];
      }
    }

    void registObjAttr(int posy, int posx, int attr2) {
      int idx = (posy + OFFSET_Y) / LINEBLOCK;
      int registNum = registNumOnSorted[idx];
      if (registNum < itemNumInBlock[idx]) {
        OBJATTR *p = objattrStartPosInBlock[idx] + registNum;

        p->attr0 = posy & 0xff;
        p->attr1 = posx & 0x1ff;
        p->attr2 = attr2;

        ++(registNumOnSorted[idx]);
      }
    }

    /**
     * set firstCopySize, itemContainIdx
     */
    void calcIRQInfo() {
      // calc firstCopySize
      firstCopySize = itemNumInBlock[0];
      int firstIdx = NUM_BLOCK;
      for (int i = 1; i < NUM_BLOCK; ++i) {
        if (firstCopySize + itemNumInBlock[i] > MAX_SPRITE) {
          firstIdx = i;
          break;
        }
        firstCopySize += itemNumInBlock[i];
      }

      // must vcount > 0 in irq_vcount & irq_vblank
      if (getAlignedPosYByBlockIdx(firstIdx) - LINEBLOCK < 0) {
        firstIdx = (OFFSET_Y + LINEBLOCK) / LINEBLOCK;
      }

      // calc itemContainIdx
      int *p = itemContainIdx;
      for (int *blk = itemNumInBlock + firstIdx; blk < itemNumInBlock + NUM_BLOCK; ++blk) {
        if (*blk > 0) {
          *p++ = blk - itemNumInBlock;
        }
      }
      *p = NUM_BLOCK;
    }

    int getAlignedPosYByBlockIdx(int idx) {
      return idx * LINEBLOCK - OFFSET_Y;
    }
  };

  static CompiledObjattr *getIncurrentCompiledObjattr() {
    return compiledObjattr + (currentCompiledObjattr == compiledObjattr);
  }

  static void setCompileDone() {
    isCompileDone = true;
  }

  static void switchCurrentCompiledObjattr() {
    currentCompiledObjattr = getIncurrentCompiledObjattr();
  }

private:
  static OBJATTR zeroclearObjattr[MAX_SPRITE];
#if 0
  static OBJATTR sortedOBJATTR[COMPILED_OBJATTR_NUM][MAXITEM];
#else
  static OBJATTR (*sortedOBJATTR)[MAXITEM];
#endif
  static CompiledObjattr compiledObjattr[COMPILED_OBJATTR_NUM];
  static CompiledObjattr *currentCompiledObjattr;
  static volatile bool isCompileDone;
  static int frameSkipCount;
};

#endif
