#include <iostream>

int main() {
    int sideLength;

    // Ask the user for a positive integer (1-15)
    do {
        std::cout << "Enter a positive integer (1-15): ";
        std::cin >> sideLength;

        if (sideLength < 1 || sideLength > 15) {
            std::cout << "Please enter a positive integer between 1 and 15." << std::endl;
        }
    } while (sideLength < 1 || sideLength > 15);

    // Display the square using 'X'
    for (int i = 0; i < sideLength; ++i) {
        for (int j = 0; j < sideLength; ++j) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }

    return 0;
}
