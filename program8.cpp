#include <iostream>
#include <cstdlib> // For random number generation
#include <ctime>   // For seeding the random number generator

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char choice;
    double num1, num2;
    bool quit = false;

    do {
        // Display menu
        std::cout << "Math Practice Menu:" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case '1': // Addition
                num1 = std::rand() % 100 + 1; // Generate random numbers between 1 and 100
                num2 = std::rand() % 100 + 1;
                std::cout << "What is " << num1 << " + " << num2 << "? ";
                double answer;
                std::cin >> answer;
                if (answer == num1 + num2) {
                    std::cout << "Correct!" << std::endl;
                } else {
                    std::cout << "Incorrect. The correct answer is " << num1 + num2 << std::endl;
                }
                break;
            case '2': // Subtraction
                num1 = std::rand() % 100 + 1;
                num2 = std::rand() % 100 + 1;
                std::cout << "What is " << num1 << " - " << num2 << "? ";
                std::cin >> answer;
                if (answer == num1 - num2) {
                    std::cout << "Correct!" << std::endl;
                } else {
                    std::cout << "Incorrect. The correct answer is " << num1 - num2 << std::endl;
                }
                break;
            case '3': // Multiplication
                num1 = std::rand() % 10 + 1; // Generate random numbers between 1 and 10
                num2 = std::rand() % 10 + 1;
                std::cout << "What is " << num1 << " * " << num2 << "? ";
                std::cin >> answer;
                if (answer == num1 * num2) {
                    std::cout << "Correct!" << std::endl;
                } else {
                    std::cout << "Incorrect. The correct answer is " << num1 * num2 << std::endl;
                }
                break;
            case '4': // Division
                num1 = std::rand() % 100 + 1;
                num2 = std::rand() % 10 + 1; // Ensure divisor is not 0
                std::cout << "What is " << num1 << " / " << num2 << "? ";
                double quotient;
                std::cin >> quotient;
                if (quotient == static_cast<double>(num1) / num2) {
                    std::cout << "Correct!" << std::endl;
                } else {
                    std::cout << "Incorrect. The correct answer is " << static_cast<double>(num1) / num2 << std::endl;
                }
                break;
            case '5': // Quit
                quit = true;
                break;
            default:
                std::cout << "Invalid choice. Please select 1-5." << std::endl;
        }
    } while (!quit);

    std::cout << "Goodbye!" << std::endl;

    return 0;
}
