#include <iostream>

int main() {
    double budget;
    double expense;
    double totalExpenses = 0.0;

    // Ask the user to enter the budget for the month
    std::cout << "Enter your budget for the month: $";
    std::cin >> budget;

    // Ask the user to enter their expenses until they choose to stop
    while (true) {
        std::cout << "Enter an expense (or 0 to finish): $";
        std::cin >> expense;

        if (expense == 0.0) {
            break; // Exit the loop if the user enters 0
        }

        // Input validation: Ensure expenses are not negative
        while (expense < 0.0) {
            std::cout << "Please enter a non-negative expense: $";
            std::cin >> expense;
        }

        totalExpenses += expense;
    }

    // Calculate the budget difference
    double budgetDifference = budget - totalExpenses;

    // Display the budget status
    if (budgetDifference > 0) {
        std::cout << "You are under budget by: $" << budgetDifference << std::endl;
    } else if (budgetDifference < 0) {
        std::cout << "You are over budget by: $" << -budgetDifference << std::endl;
    } else {
        std::cout << "You have exactly met your budget." << std::endl;
    }

    return 0;
}
