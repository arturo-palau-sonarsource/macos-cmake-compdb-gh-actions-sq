#include <iostream>

int main() {
  int x = 5;
  int y = 0;

  // Potential division by zero
  int z = x / y;

  std::cout << "Result: " << z << std::endl;

  return 0;
}
