#include <iostream>
#include <iomanip>

int main() {
    double annualInterestRate;
    double startingBalance;
    int numMonths;

    // Ask the user for annual interest rate, starting balance, and number of months
    std::cout << "Enter the annual interest rate (as a decimal): ";
    std::cin >> annualInterestRate;
    
    std::cout << "Enter the starting balance: $";
    std::cin >> startingBalance;

    std::cout << "Enter the number of months that have passed: ";
    std::cin >> numMonths;

    double monthlyInterestRate = annualInterestRate / 12.0;
    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= numMonths; ++month) {
        double deposit, withdrawal;

        // Ask for the amount deposited during the month
        std::cout << "Enter the amount deposited in month " << month << ": $";
        std::cin >> deposit;

        // Input validation: Ensure the deposit is not negative
        while (deposit < 0) {
            std::cout << "Please enter a non-negative deposit amount: $";
            std::cin >> deposit;
        }

        // Ask for the amount withdrawn during the month
        std::cout << "Enter the amount withdrawn in month " << month << ": $";
        std::cin >> withdrawal;

        // Input validation: Ensure the withdrawal is not negative
        while (withdrawal < 0) {
            std::cout << "Please enter a non-negative withdrawal amount: $";
            std::cin >> withdrawal;
        }

        // Update balance, total deposits, total withdrawals, and total interest
        balance += deposit - withdrawal;
        totalDeposits += deposit;
        totalWithdrawals += withdrawal;
        totalInterest += balance * monthlyInterestRate;
    }

    // Display the ending balance, total deposits, total withdrawals, and total interest
    std::cout << "Ending Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    std::cout << "Total Deposits: $" << std::fixed << std::setprecision(2) << totalDeposits << std::endl;
    std::cout << "Total Withdrawals: $" << std::fixed << std::setprecision(2) << totalWithdrawals << std::endl;
    std::cout << "Total Interest Earned: $" << std::fixed << std::setprecision(2) << totalInterest << std::endl;

    return 0;
}
