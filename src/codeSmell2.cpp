#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    if (x > y) {
        std::cout << "x is greater than y" << std::endl;
    }
    else if (x < y) {
        std::cout << "y is greater than x" << std::endl;
    }
    else {
        std::cout << "x and y are equal" << std::endl;
    }
    
    if (x > y)
        std::cout << "x is greater than y" << std::endl;
    else if (x < y)
        std::cout << "y is greater than x" << std::endl;
    else
        std::cout << "x and y are equal" << std::endl;

    return 0;
}
