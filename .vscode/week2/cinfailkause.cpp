#include <iostream>
#include <limits>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (std::cin.fail()) {
        std::cerr << "Error: Invalid input. Please enter a valid integer." << std::endl;
      
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
    } else {
        std::cout << "You entered: " << number << std::endl;
    }

    return 0;
}
