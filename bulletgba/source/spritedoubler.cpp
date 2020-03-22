#include <gba.h>
#include "spritedoubler.hpp"
#include "boost/static_assert.hpp"

OBJATTR SpriteDoubler::zeroclearObjattr[MAX_SPRITE] EWRAM_DATA;
#if 0
EWRAM_DATA OBJATTR SpriteDoubler::sortedOBJATTR[COMPILED_OBJATTR_NUM][MAXITEM];
#else
OBJATTR (*SpriteDoubler::sortedOBJATTR)[MAXITEM] = reinterpret_cast<OBJATTR(*)[MAXITEM]>(static_cast<u8*>(OBJ_BASE_ADR) + 16 * 1024);
BOOST_STATIC_ASSERT(sizeof(OBJATTR[SpriteDoubler::COMPILED_OBJATTR_NUM][SpriteDoubler::MAXITEM]) <= 16 * 1024);
#endif

SpriteDoubler::CompiledObjattr SpriteDoubler::compiledObjattr[COMPILED_OBJATTR_NUM];
SpriteDoubler::CompiledObjattr *SpriteDoubler::currentCompiledObjattr;

volatile bool SpriteDoubler::isCompileDone = false;
int SpriteDoubler::frameSkipCount = 0;
