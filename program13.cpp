#include <iostream>

int main() {
    int number;
    int largest = INT_MIN;  // Initialize to the smallest possible integer
    int smallest = INT_MAX; // Initialize to the largest possible integer

    std::cout << "Enter a series of integers, and enter -99 to end the series." << std::endl;

    while (true) {
        std::cout << "Enter an integer (-99 to end): ";
        std::cin >> number;

        if (number == -99) {
            break; // Exit the loop when -99 is entered
        }

        // Update the largest and smallest values
        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }
    }

    if (largest == INT_MIN && smallest == INT_MAX) {
        std::cout << "No numbers were entered." << std::endl;
    } else {
        std::cout << "Largest number entered: " << largest << std::endl;
        std::cout << "Smallest number entered: " << smallest << std::endl;
    }

    return 0;
}
