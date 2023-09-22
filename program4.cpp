#include <iostream>

int main() {
    const double caloriesPerMinute = 3.6;
    
    // Display a header
    std::cout << "Minutes\tCalories Burned" << std::endl;
    std::cout << "----------------------" << std::endl;

    // Calculate and display calories burned for each interval
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = caloriesPerMinute * minutes;
        std::cout << minutes << "\t" << caloriesBurned << std::endl;
    }

    return 0;
}
