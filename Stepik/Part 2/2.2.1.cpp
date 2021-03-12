#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get(int n) {
    assert(n >= 0);
    unsigned long a = 0;
    unsigned long b = 1;
    unsigned long temp = 0;
    for (unsigned int i = 0; i < n; i++){
        temp = a;
        a = b;
        b = temp + b;
    }
    return a;
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  return 0;
}