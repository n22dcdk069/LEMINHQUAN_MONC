#include <iostream>

int main() {
    double speed;
    int hours;

    // Get the speed of the vehicle
    do {
        std::cout << "What is the speed of the vehicle in mph? ";
        std::cin >> speed;
        if (speed < 0) {
            std::cout << "Please enter a non-negative speed." << std::endl;
        }
    } while (speed < 0);

    // Get the number of hours traveled
    do {
        std::cout << "How many hours has it traveled? ";
        std::cin >> hours;
        if (hours < 1) {
            std::cout << "Please enter a value of 1 or greater for time traveled." << std::endl;
        }
    } while (hours < 1);

    // Display header
    std::cout << "Hour   Distance Traveled" << std::endl;
    std::cout << "------------------------" << std::endl;

    // Calculate and display distance for each hour
    for (int hour = 1; hour <= hours; ++hour) {
        double distance = speed * hour;
        std::cout << hour << "      " << distance << std::endl;
    }

    return 0;
}
