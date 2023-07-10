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
        // Handle the exception appropriately
        std::cerr << "Exception caught in processInput: " << e.what() << std::endl;
    }
}

int main() {
    try {
        int input;
        std::cout << "Enter a positive integer: ";
        std::cin >> input;
        processInput(input);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }
    return 0;
}
