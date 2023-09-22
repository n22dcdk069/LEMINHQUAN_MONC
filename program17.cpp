#include <iostream>

int main() {
    int sales[5];

    // Ask the user to enter today's sales for each store
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter today's sales for store " << i + 1 << ": ";
        std::cin >> sales[i];

        // Ensure the entered sales are non-negative
        while (sales[i] < 0) {
            std::cout << "Please enter a non-negative sales amount: ";
            std::cin >> sales[i];
        }
    }

    // Display the sales bar chart
    std::cout << "\nSALES BAR CHART" << std::endl;
    std::cout << "(Each * = $100)" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Store " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
