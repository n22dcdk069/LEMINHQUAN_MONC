#include <iostream>

int main() {
    const double seaLevelRiseRate = 1.5; // Millimeters per year
    int years = 25;

    std::cout << "Year\tRise (mm)" << std::endl;
    std::cout << "----------------" << std::endl;

    for (int year = 1; year <= years; ++year) {
        double rise = seaLevelRiseRate * year;
        std::cout << year << "\t" << rise << std::endl;
    }

    return 0;
}
