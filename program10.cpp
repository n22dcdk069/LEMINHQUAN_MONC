#include <iostream>

int main() {
    int numYears;
    double totalRainfall = 0.0;
    const int monthsPerYear = 12;

    // Ask the user for the number of years
    std::cout << "Enter the number of years: ";
    std::cin >> numYears;

    // Input validation: Ensure the number of years is at least 1
    while (numYears < 1) {
        std::cout << "Please enter a valid number of years (at least 1): ";
        std::cin >> numYears;
    }

    // Outer loop for each year
    for (int year = 1; year <= numYears; ++year) {
        // Inner loop for each month
        for (int month = 1; month <= monthsPerYear; ++month) {
            double rainfall;

            // Ask the user for the monthly rainfall
            std::cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
            std::cin >> rainfall;

            // Input validation: Ensure rainfall is not negative
            while (rainfall < 0) {
                std::cout << "Please enter a valid value for rainfall (not negative): ";
                std::cin >> rainfall;
            }

            // Accumulate total rainfall
            totalRainfall += rainfall;
        }
    }

    // Calculate average rainfall
    int totalMonths = numYears * monthsPerYear;
    double averageRainfall = totalRainfall / totalMonths;

    // Display results
    std::cout << "Number of months: " << totalMonths << std::endl;
    std::cout << "Total inches of rainfall: " << totalRainfall << " inches" << std::endl;
    std::cout << "Average rainfall per month: " << averageRainfall << " inches" << std::endl;

    return 0;
}
