#include <iostream>
#include <iomanip>

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFicaWithholdings = 0.0;
    
    std::cout << "Payroll Report" << std::endl;
    std::cout << "Enter employee data. Enter 0 for employee number to exit." << std::endl;

    while (true) {
        // Ask the user for employee data
        std::cout << "Employee Number (0 to exit): ";
        std::cin >> employeeNumber;
        
        // Exit loop if the user enters 0
        if (employeeNumber == 0) {
            break;
        }
        
        // Input validation: Ensure non-negative values for gross pay, state tax, federal tax, and FICA withholdings
        do {
            std::cout << "Gross Pay: ";
            std::cin >> grossPay;
            std::cout << "State Tax: ";
            std::cin >> stateTax;
            std::cout << "Federal Tax: ";
            std::cin >> federalTax;
            std::cout << "FICA Withholdings: ";
            std::cin >> ficaWithholdings;

            if (grossPay < 0 || stateTax < 0 || federalTax < 0 || ficaWithholdings < 0) {
                std::cout << "Please enter non-negative values." << std::endl;
            } else if (stateTax + federalTax + ficaWithholdings > grossPay) {
                std::cout << "Error: Total withholdings exceed gross pay. Please reenter data." << std::endl;
            }
        } while (grossPay < 0 || stateTax < 0 || federalTax < 0 || ficaWithholdings < 0 || stateTax + federalTax + ficaWithholdings > grossPay);
        
        // Calculate net pay
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;
        
        // Update totals
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        
        // Display individual employee data
        std::cout << "Employee #" << employeeNumber << " - Net Pay: $" << std::fixed << std::setprecision(2) << netPay << std::endl;
    }
    
    // Display total payroll data
    std::cout << "Total Gross Pay: $" << std::fixed << std::setprecision(2) << totalGrossPay << std::endl;
    std::cout << "Total State Tax: $" << std::fixed << std::setprecision(2) << totalStateTax << std::endl;
    std::cout << "Total Federal Tax: $" << std::fixed << std::setprecision(2) << totalFederalTax << std::endl;
    std::cout << "Total FICA Withholdings: $" << std::fixed << std::setprecision(2) << totalFicaWithholdings << std::endl;
    
    return 0;
}
