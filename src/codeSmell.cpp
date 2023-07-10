#include <iostream>
#include <stdexcept>

void processInput(int value) {
    try {
        if (value < 0) {
            throw std::invalid_argument("Negative value not allowed");
        }
        // Process the input value
        std::cout << "Processing input: " << value << std::endl;
    } catch (const std::exception& e) {
        // Rethrow the caught exception without doing anything
        throw e;
    }
}

int main() {
    try {
        int input;
        std::cout << "Enter a positive integer: ";
        std::cin >> input;
        processInput(input);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
