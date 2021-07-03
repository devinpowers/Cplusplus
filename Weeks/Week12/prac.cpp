#include <iostream>     // std::cout, std::right, std::endl
#include <iomanip>      // std::setw

int main () {
  int val = 65;

  std::cout << std::right;       // right-adjusted (manipulator)
  std::cout << std::setw(10);    // set width (extended manipulator)

  std::cout << val << std::endl; // multiple insertions

  return 0;
}