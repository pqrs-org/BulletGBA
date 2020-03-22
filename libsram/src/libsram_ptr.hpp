#ifndef LIBSRAM_PTR_HPP
#define LIBSRAM_PTR_HPP

#ifdef SRAM_TEST
#include <gba_types.h>
#undef IWRAM_CODE
#define IWRAM_CODE /* */
#undef EWRAM_DATA
#define EWRAM_DATA /* */
#else
#include <gba.h>
#endif

#include "boost/static_assert.hpp"

class SRAMPtr {
public:
  SRAMPtr(void) { ptr = NULL; }
  SRAMPtr(u8 *_ptr) { ptr = _ptr; }
  SRAMPtr &operator=(SRAMPtr _ptr) { ptr = _ptr.ptr; return *this; }

  u8 *getPtr(void) const {return ptr;}
  bool isNULL(void) const {return ptr == NULL;}

  SRAMPtr &operator+=(int num) { ptr += num; return *this; }
  SRAMPtr &operator-=(int num) { ptr -= num; return *this; }

  const int operator-(SRAMPtr p) const { return ptr - p.ptr; }

  IWRAM_CODE void write_u8(u8 data);

  // Reading from SRAM should be performed by code exectued in WRAM only (but not by code executed in ROM).
  IWRAM_CODE u8 read_u8(void);

private:
  u8 *ptr;
};
BOOST_STATIC_ASSERT(sizeof(SRAMPtr) == 4);


#endif
