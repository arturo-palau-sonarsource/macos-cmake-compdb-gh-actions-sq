#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum =+ i;  // Bug: Incorrect usage of "=+" instead of "+="
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
