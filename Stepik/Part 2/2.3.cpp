#include <cassert>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {

  int t = 0;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;

}

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}