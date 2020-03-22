#include "libsram_ptr.hpp"

void
SRAMPtr::write_u8(u8 data)
{
  *ptr++ = data;
}

u8
SRAMPtr::read_u8()
{
  return *ptr++;
}
