#include <iostream>

int main() {
    int startingPopulation;
    double dailyIncrease;
    int numDays;

    // Ask the user for the starting population
    std::cout << "Enter the starting number of organisms (at least 2): ";
    std::cin >> startingPopulation;

    // Input validation: Ensure starting population is at least 2
    while (startingPopulation < 2) {
        std::cout << "Please enter a valid starting number of organisms (at least 2): ";
        std::cin >> startingPopulation;
    }

    // Ask the user for the daily population increase as a percentage
    std::cout << "Enter the average daily population increase (as a percentage): ";
    std::cin >> dailyIncrease;

    // Input validation: Ensure daily increase is not negative
    while (dailyIncrease < 0) {
        std::cout << "Please enter a valid daily population increase (not negative): ";
        std::cin >> dailyIncrease;
    }

    // Ask the user for the number of days
    std::cout << "Enter the number of days they will multiply (at least 1): ";
    std::cin >> numDays;

    // Input validation: Ensure the number of days is at least 1
    while (numDays < 1) {
        std::cout << "Please enter a valid number of days (at least 1): ";
        std::cin >> numDays;
    }

    // Display header
    std::cout << "Day\tPopulation" << std::endl;
    std::cout << "----------------" << std::endl;

    // Calculate and display population for each day
    double population = startingPopulation;
    for (int day = 1; day <= numDays; ++day) {
        std::cout << day << "\t" << population << std::endl;
        population += (population * dailyIncrease / 100.0);
    }

    return 0;
}
