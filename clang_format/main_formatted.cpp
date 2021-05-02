#include <algorithm>
#include <iostream>
#include <string>

void func(void) {
  int some_name = 0;
  some_name = 42;
}

void func_one_line() { std::cout << "hello\n"; }

struct Bar {
 public:
  Bar() = default;

 private:
  int m_member;
};

int main() {
  int a = 0, b = 0;

  return 0;
}