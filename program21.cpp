#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int randomNum = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;

    while (true) {
        std::cout << "Guess the number (1-100): ";
        std::cin >> userGuess;

        // Increment the number of attempts
        attempts++;

        if (userGuess < 1 || userGuess > 100) {
            std::cout << "Please enter a number between 1 and 100." << std::endl;
        } else if (userGuess < randomNum) {
            std::cout << "Too low, try again." << std::endl;
        } else if (userGuess > randomNum) {
            std::cout << "Too high, try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << randomNum << " in " << attempts << " attempts." << std::endl;
            break; // Exit the loop when the user guesses correctly
        }
    }

    return 0;
}
