#include <stdio.h>
#include <stdlib.h>

#include "libstack.hpp"

int
main()
{
  Stack<unsigned short, 32> stack;
  stack.initialize();
  printf("%d\n", stack.isEmpty());

  for (int i = 0; i < 16; ++i) {
    stack.push(i);
  }

  while (! stack.isEmpty()) {
    printf("%d\n", stack.pop());
  }

  return 0;
}
