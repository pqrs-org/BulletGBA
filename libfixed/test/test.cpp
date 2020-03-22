#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include "fixed.hpp"

void
doubleTest()
{
  FixedPointNum fp = 1.5;
  if ((fp * 2).toInt() != 3) {
    printf("[ERROR] doubleTest\n");
  }

  fp = - 0.7;
  if (fp >= 0) {
    printf("[ERROR] doubleTest\n");
  }
  printf("[TEST] -0.7 = 0x%x\n", fp.getRawValue());

  fp += 0.7;
  printf("[TEST] -0.7 + 0.7 = 0x%x\n", fp.getRawValue());

  fp = FixedPointNum::degree2angle(- 0.7);
  printf("[TEST] degree2angle(-0.7) = 0x%x\n", fp.getRawValue());
  printf("[TEST] cos(-0.7) = 0x%x\n", FixedPointNum::cos(fp).getRawValue());
  printf("[TEST] sin(-0.7) = 0x%x\n", FixedPointNum::sin(fp).getRawValue());

  fp = 0;
  for (int i = 0; i < 8; ++i) {
    fp += FixedPointNum::degree2angle(0.7);
    printf("[TEST:%d] degree2angle(0.7) = 0x%x\n", i, fp.getRawValue());
    printf("[TEST:%d] cos(0.7) = 0x%x\n", i, FixedPointNum::cos(fp).getRawValue());
    printf("[TEST:%d] sin(0.7) = 0x%x\n", i, FixedPointNum::sin(fp).getRawValue());
  }

  fp = - 0.7;
  fp += - 0.7;
  printf("[TEST] -0.7 - 0.7 = 0x%x\n", fp.getRawValue());

  fp = 0;
  printf("[TEST1] cos() = 0x%x\n", FixedPointNum::cos(fp).getRawValue());
  printf("[TEST1] sin() = 0x%x\n", FixedPointNum::sin(fp).getRawValue());
  printf("[TEST] mask = 0x%x\n", FixedPointNum::ANGLENUM - 1);
  for (int i = 0; i < 16; ++i) {
    printf("[TEST:%d] degree2angle(45) * %d = %d\n", i, i, fp.toInt());
    fp += FixedPointNum::degree2angle(45);
  }

  fp = 0;
  for (int i = 0; i < 16; ++i) {
    printf("[TEST:%d] degree2angle(FixedPointNum(45)) * %d = %d\n", i, i, fp.toInt());
    fp += FixedPointNum::degree2angle(FixedPointNum(45));
  }

  fp = FixedPointNum::degree2angle(FixedPointNum(360));
  printf("[TEST] degree2angle(FixedPointNum(360)) = %d\n", fp.toInt());

  fp = FixedPointNum::degree2angle(360);
  printf("[TEST] degree2angle(360) = %d\n", fp.toInt());

  //fp = - 80.0 - (1.0) * 2.0 + FixedPointNum::random() - 0.5;
  fp = - 80.0 - (- 1.0) * 2.0 + FixedPointNum::random() - 0.5;
  printf("[TEST2] %d\n", fp.toInt());
}

void
operatorTest()
{
  if (FixedPointNum(3) - FixedPointNum(5) > 0) {
    printf("[ERROR] operatorTest\n");
  }

  FixedPointNum fp = 4;
  if ((fp >> 1).toInt() != 2) {
    printf("[ERROR] operatorTest >>\n");
  }

  fp = FixedPointNum::sin(21) * 100;
  printf("mul = %d (100 / 2)\n", fp.toInt());
  fp = FixedPointNum::sin(21) * -100;
  printf("mul = %d (-100 / 2)\n", fp.toInt());

  fp = FixedPointNum::sin(21) * FixedPointNum(100);
  printf("mul = %d (100 / 2)\n", fp.toInt());

  printf("div --------------------------------------------------\n");
  fp = FixedPointNum(100) / FixedPointNum(2);
  printf("div = %d (100 / 2)\n", fp.toInt());
  fp = FixedPointNum(-100) / FixedPointNum(2);
  printf("div = %d (-100 / 2)\n", fp.toInt());

  fp = 4;
  printf("[TEST] 4/30 = 0x%x\n", FixedPointNum(4, 30).getRawValue());
  printf("[TEST] - 4/30 = 0x%x\n", FixedPointNum(-4, 30).getRawValue());
  for (int i = 0; i < 30; ++i) {
    printf("[TEST] 4 - 4/30 * %d = 0x%x\n", i, fp.getRawValue());
    fp += FixedPointNum(-4, 30);
  }
  printf("[TEST] 4 - 4/30 * 30 = 0x%x\n", fp.getRawValue());
}

void
rangeTest() {
  int testnum[] = {50, 0, -50, 255, -255, -511, 511, 10000};

  for (unsigned int i = 0; i < sizeof(testnum) / sizeof(testnum[0]); ++i) {
    if (FixedPointNum(testnum[i]) != testnum[i]) {
      printf("[ERROR] testnum = %d, filtered = %d\n", testnum[i], FixedPointNum(_FixedNum(testnum[i])).toInt());
    }
    int cmpnum = -50;
    if (FixedPointNum(testnum[i]) < FixedPointNum(cmpnum)) {
      printf("1: %d < %d\n", testnum[i], cmpnum);
    } else {
      printf("1: %d >= %d\n", testnum[i], cmpnum);
    }
    if (FixedPointNum(testnum[i]) < cmpnum) {
      printf("2: %d < %d\n", testnum[i], cmpnum);
    } else {
      printf("2: %d >= %d\n", testnum[i], cmpnum);
    }
  }
}

void
dumpRand()
{
  printf("rand --------------------------------------------------\n");
  for (int i = 0; i < 32; ++i) {
    FixedPointNum fp = FixedPointNum(255) * FixedPointNum::random();
    printf("%d\n", fp.toInt());
  }
}

void
randTest()
{
  FixedPointNum fp = 130;
  printf("%d\n", fp.toInt());
  unsigned short wait = FixedPointNum(500).toInt();
  printf("%d\n", wait);
  for (int i = 0; i < 10; ++i) {
    fp = (FixedPointNum::random() * 63.75 + 95.62)
      + (FixedPointNum::random() * 14.16 - 7.08);
    fp = FixedPointNum::random() * 11.33 - 5.66;
    fp = FixedPointNum::random() * 256;
    fp = FixedPointNum::random() * 255;
    //fp = (FixedPointNum::random () * FixedPointNum (100000) - FixedPointNum (50000));
    printf("rnd: %d\n", fp.toInt());
    //printf("rnd: %d\n", FixedPointNum::random().getRawValue());
  }
}

void
sinTest()
{
  printf("sin --------------------------------------------------\n");
  int maxnum = 0xffff >> (FixedPointNum::SHIFTBIT + 1);
  for (int i = - maxnum; i < maxnum; ++i) {
    FixedPointNum fp = FixedPointNum::sin(i);
    double fixed = (1.0 * fp.getRawValue()) / (1 << FixedPointNum::SHIFTBIT);
    double real = sin(2 * 3.14 * i / FixedPointNum::ANGLENUM);
    if (fixed - real > 0.1) {
      printf("%03d: %d, %f - %f = %f\n", i, fp.getRawValue(), fixed, real, fixed - real);
    }
  }
}

void
cosTest()
{
  printf("cos --------------------------------------------------\n");
  int maxnum = 0xffff >> (FixedPointNum::SHIFTBIT + 1);
  for (int i = - maxnum; i < maxnum; ++i) {
    FixedPointNum fp = FixedPointNum::cos(FixedPointNum(i));
    double fixed = (1.0 * fp.getRawValue()) / (1 << FixedPointNum::SHIFTBIT);
    double real = cos(2 * 3.14 * i / FixedPointNum::ANGLENUM);
    if (fixed - real > 0.1) {
      printf("%03d: %f\n", i, fixed - real);
    }
  }
}

void
atanTest()
{
  printf("atan --------------------------------------------------\n");
  int x;
  int y;
  for (x = -10; x < 10; ++x) {
    for (y = -10; y < 10; ++y) {
      if (x == 0) {
        continue;
      }

      FixedPointNum theta = FixedPointNum::atan(FixedPointNum(y), FixedPointNum(x));
      double f_sin = (1.0 * FixedPointNum::sin(theta).getRawValue()) / (1 << FixedPointNum::SHIFTBIT);
      double f_cos = (1.0 * FixedPointNum::cos(theta).getRawValue()) / (1 << FixedPointNum::SHIFTBIT);
      double fixed;
      if (f_cos == 0) {
        fixed = 1.0;
      } else {
        fixed = f_sin / f_cos;
      }

      double real = 1.0 * y / x;

      if (fixed - real > 0.1) {
        printf("%3dx%3d: t: %4d, sin: %9f, cos: %9f, %9f - %9f = %9f\n", x, y, theta.toInt(), f_sin, f_cos, fixed, real, fixed - real);
      }
    }
  }
}

int
main()
{
  printf("sizeof(FixedPointNum) = %d\n", sizeof(FixedPointNum));
  printf("sizeof(fixednum) = %d\n", sizeof(fixednum));

  {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    printf("timeofday = %d (sec)\n", static_cast<int>(tv.tv_sec));
    init_genrand(tv.tv_sec);
  }

  doubleTest();
  operatorTest();
  rangeTest();
  dumpRand();
  randTest();
  sinTest();
  cosTest();
  atanTest();

  return 0;
}
