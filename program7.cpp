#include <iostream>
#include <iomanip>

int main() {
    int days;

    // Get the number of days worked
    do {
        std::cout << "Enter the number of days worked (must be at least 1): ";
        std::cin >> days;

        if (days < 1) {
            std::cout << "Please enter a number of days greater than or equal to 1." << std::endl;
        }
    } while (days < 1);

    // Initialize variables
    double salary = 0.01; // Initial salary is one penny
    double totalPay = 0.0;

    // Display header
    std::cout << "Day\tSalary (in dollars)" << std::endl;
    std::cout << "--------------------------" << std::endl;

    // Calculate and display salary for each day
    for (int day = 1; day <= days; ++day) {
        totalPay += salary;
        std::cout << day << "\t$" << std::fixed << std::setprecision(2) << salary << std::endl;
        salary *= 2; // Double the salary for the next day
    }

    // Display total pay
    std::cout << "Total pay over " << days << " days: $" << std::fixed << std::setprecision(2) << totalPay << std::endl;

    return 0;
}
