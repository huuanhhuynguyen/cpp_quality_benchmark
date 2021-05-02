#include <iostream>
#include "lib/some_lib.h"

struct Base {
  virtual void reimplementMe(int a) {}
};

struct Derived : public Base  {
  virtual void reimplementMe(int a) {}  // missing override
};



int main() {

    Foo foo;
    foo.bar();

    int* old_null_ptr = NULL;

    return 0;
}
