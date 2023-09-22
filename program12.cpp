#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Celsius\tFahrenheit" << std::endl;
    std::cout << "-----------------" << std::endl;

    for (int celsius = 0; celsius <= 20; ++celsius) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << celsius << "\t" << std::fixed << std::setprecision(2) << fahrenheit << std::endl;
    }

    return 0;
}
