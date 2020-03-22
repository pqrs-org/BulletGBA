#ifndef LIBSTACK_HPP
#define LIBSTACK_HPP

template <typename T_, int n>
class Stack {
public:
  void initialize() {
    size = 0;
  }
  void push(T_ item) {
    body[size] = item;
    ++size;
  }
  T_ pop(void) {
    --size;
    return body[size];
  }
  bool isEmpty(void) const {
    return size == 0;
  }
  int getSize(void) const {
    return size;
  }

private:
  T_ body[n];
  int size;
};

#endif
