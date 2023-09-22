#include <iostream>
#include <fstream>

int main() {
    // Get user input
    double initialBalance, annualInterestRate;
    int numMonths;
    
    std::cout << "Enter the initial balance: ";
    std::cin >> initialBalance;
    
    std::cout << "Enter the annual interest rate (as a decimal): ";
    std::cin >> annualInterestRate;
    
    std::cout << "Enter the number of months: ";
    std::cin >> numMonths;

    // Open a file for writing
    std::ofstream outputFile("SavingsAccountReport.txt");

    if (!outputFile) {
        std::cerr << "Error: Could not open the file for writing." << std::endl;
        return 1;
    }

    // Calculate and write the balance to the file for each month
    for (int month = 1; month <= numMonths; ++month) {
        double monthlyInterest = (initialBalance * annualInterestRate) / 12;
        initialBalance += monthlyInterest;

        // Write the balance to the file
        outputFile << "Month " << month << ": " << "Balance = $" << initialBalance << std::endl;
    }

    // Close the output file
    outputFile.close();

    std::cout << "Report has been written to 'SavingsAccountReport.txt'." << std::endl;

    return 0;
}
