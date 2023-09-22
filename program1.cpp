#include <iostream>

int main() {
    int number;
    int sum = 0;

    // Ask the user for a positive integer
    do {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;

        // Check if the input is negative
        if (number <= 0) {
            std::cout << "Please enter a positive integer.\n";
        }
    } while (number <= 0);

    // Calculate the sum using a loop
    for (int i = 1; i <= number; ++i) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of integers from 1 to " << number << " is: " << sum << std::endl;

    return 0;
}
