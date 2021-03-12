#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_last_digit(int n) {
    assert(n >= 1);
    unsigned long a = 0;
    unsigned long b = 1;
    unsigned long temp = 0;
    for (unsigned int i = 0; i < n; i++){
        temp = a % 10;
        a = b % 10;
        b = (temp + b) % 10;
    }
    return a;
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
}