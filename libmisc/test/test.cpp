#include <stdio.h>
#include <stdlib.h>

#define Div(x,y) (x / y)
#define DivMod(x,y) (x % y)

#include "libplaytime.hpp"

void
displayPlayTime(PlayTime &playTime)
{
  printf("%10d %02d:%02d:%02d\n",
         playTime.toInt(),
         playTime.getMin(),
         playTime.getSec(),
         playTime.getMilliSec());
}

int
main()
{
  PlayTime playTime;

  playTime.initialize();
  for (int i = 0; i < 512; ++i) {
    displayPlayTime(playTime);
    playTime.succFrame();
  }

  printf("\n\n----\ninit 2078\n");
  playTime.initialize(2078);
  displayPlayTime(playTime);
}
