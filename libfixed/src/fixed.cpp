#include <stdlib.h>
#include "fixed.hpp"

FixedPointNum
FixedPointNum::atan(FixedPointNum fy, FixedPointNum fx)
{
  int x = fx.toInt();
  int y = fy.toInt();

  if ((x | y) == 0) {
    return FixedPointNum(0);
  }

  if (y >= 0) {
    if (x >= 0) {
      if (x > y) {
        return FixedPointNum(_FixedNum(fixedTableAtan[Div(y << ATANBIT, x)]));
      } else {
        return FixedPointNum(ANGLENUM / 4) - FixedPointNum(_FixedNum(fixedTableAtan[Div(x << ATANBIT, y)]));
      }
    } else {
      if (y > -x) {
        return FixedPointNum(ANGLENUM / 4) + FixedPointNum(_FixedNum(fixedTableAtan[Div(-x << ATANBIT, y)]));
      } else {
        return FixedPointNum(ANGLENUM / 2) - FixedPointNum(_FixedNum(fixedTableAtan[Div(y << ATANBIT, -x)]));
      }
    }
  } else {
    if (x <= 0) {
      if (-x > -y) {
        return FixedPointNum(ANGLENUM / 2) + FixedPointNum(_FixedNum(fixedTableAtan[Div(-y << ATANBIT, -x)]));
      } else {
        return FixedPointNum(ANGLENUM - ANGLENUM / 4) - FixedPointNum(_FixedNum(fixedTableAtan[Div(-x << ATANBIT, -y)]));
      }
    } else {
      if (-y > x) {
        return FixedPointNum(ANGLENUM - ANGLENUM / 4) + FixedPointNum(_FixedNum(fixedTableAtan[Div(x << ATANBIT, -y)]));
      } else {
        return FixedPointNum(ANGLENUM) - FixedPointNum(_FixedNum(fixedTableAtan[Div(-y << ATANBIT, x)]));
      }
    }
  }
}
