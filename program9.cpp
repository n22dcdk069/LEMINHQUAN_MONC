#include <iostream>

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupied = 0;

    // Ask the user for the number of floors in the hotel
    std::cout << "Enter the number of floors in the hotel (must be at least 1): ";
    std::cin >> numFloors;

    // Input validation: Ensure the number of floors is at least 1
    while (numFloors < 1) {
        std::cout << "Please enter a valid number of floors (at least 1): ";
        std::cin >> numFloors;
    }

    // Iterate through each floor to collect occupancy data
    for (int floor = 1; floor <= numFloors; ++floor) {
        int numRooms, numOccupied;
        
        // Ask the user for the number of rooms on the floor
        std::cout << "Enter the number of rooms on floor " << floor << " (must be at least 10): ";
        std::cin >> numRooms;

        // Input validation: Ensure the number of rooms is at least 10
        while (numRooms < 10) {
            std::cout << "Please enter a valid number of rooms (at least 10): ";
            std::cin >> numRooms;
        }

        // Ask the user for the number of occupied rooms on the floor
        std::cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        std::cin >> numOccupied;

        // Input validation: Ensure the number of occupied rooms is not negative and not greater than the total rooms on the floor
        while (numOccupied < 0 || numOccupied > numRooms) {
            std::cout << "Please enter a valid number of occupied rooms (between 0 and " << numRooms << "): ";
            std::cin >> numOccupied;
        }

        // Update total counts
        totalRooms += numRooms;
        totalOccupied += numOccupied;
    }

    // Calculate occupancy rate
    double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100.0;

    // Display the results
    std::cout << "Total number of rooms in the hotel: " << totalRooms << std::endl;
    std::cout << "Total number of rooms occupied: " << totalOccupied << std::endl;
    std::cout << "Total number of rooms unoccupied: " << totalRooms - totalOccupied << std::endl;
    std::cout << "Occupancy rate: " << occupancyRate << "%" << std::endl;

    return 0;
}
