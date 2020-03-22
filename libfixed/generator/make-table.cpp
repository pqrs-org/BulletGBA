#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FIXEDNUM_TEST
#include "fixed.hpp"

const fixednum fixedTableSin[] = {};
const fixednum fixedTableAtan[] = {};

int
main()
{
  printf("/* This code is generated by make-table.rb. */\n\n");
  printf("#include \"fixed.hpp\"\n\n");
  printf("const fixednum fixedTableSin[] = {\n");
  for (int i = 0; i < FixedPointNum::anglenum; ++i) {
    printf("/* %3d: */  ", i);
    printf("%d,\n", static_cast<int>(sin((2 * M_PI * i) / FixedPointNum::anglenum) * (1 << FixedPointNum::shiftbit)));
  }
  printf("};\n");

  printf("const fixednum fixedTableAtan[] = {\n");
  for (int i = 0; i < (1 << FixedPointNum::atanbit) + 1; ++i) {
    printf("/* %3d: */  ", i);
    printf("%d,\n", static_cast<int>(
             atan2(i, (1 << FixedPointNum::atanbit)) * (static_cast<double>(FixedPointNum::anglenum) / 2 / M_PI) 
             * (1 << FixedPointNum::shiftbit)));
  }
  printf("};\n");
}