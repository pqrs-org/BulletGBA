#ifndef SIMPLESTRING_HPP
#define SIMPLESTRING_HPP

#include <string.h>

template <int SIZE>
class SimpleString {
public:
  void initialize(void) {
    memset(buf, 0, sizeof(buf));
    length = 0;
  }

  const char *c_str(void) const {
    return buf;
  }

  void append(char c) {
    if (length < SIZE - 1) {
      buf[length] = c;
      ++length;
    }
  }

  void append(const char *string) {
    const char *p = string;
    while (*p) {
      append(*p);
      ++p;
    }
  }

  void append(int num, int order) {
    if (order == 1) {
      if (num >= 10) {
        append('A' + num - 10);
      } else {
        append('0' + num);
      }
    } else {
      append(Div(num, 10), order - 1);
      append('0' + DivMod(num, 10));
    }
  }

private:
  char buf[SIZE];
  int length;
};


#endif
