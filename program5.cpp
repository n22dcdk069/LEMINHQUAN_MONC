#include <iostream>
#include <iomanip>

int main() {
    const double initialFee = 2500.0; // Initial membership fee
    const double annualIncreaseRate = 0.04; // 4% annual increase rate
    double membershipFee = initialFee;

    // Display a header
    std::cout << "Year\tMembership Fee" << std::endl;
    std::cout << "-------------------" << std::endl;

    // Calculate and display membership fees for the next six years
    for (int year = 1; year <= 6; ++year) {
        std::cout << year << "\t$" << std::fixed << std::setprecision(2) << membershipFee << std::endl;
        membershipFee *= (1 + annualIncreaseRate); // Calculate the fee for the next year
    }

    return 0;
}
