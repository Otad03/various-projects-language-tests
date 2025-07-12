#include <iostream>

int main() {
    std::cout << "You chose option 4.\n";
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "0 is neither odd nor even." << std::endl;
    } else if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
