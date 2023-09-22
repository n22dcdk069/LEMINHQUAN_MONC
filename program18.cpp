#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the file for reading
    std::ifstream inputFile("People.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }

    std::string years[] = {"1900", "1920", "1940", "1960", "1980", "2000"};
    int population;

    // Display the header
    std::cout << "PRAIRIEVILLE POPULATION GROWTH" << std::endl;
    std::cout << "(each * represents 1,000 people)" << std::endl;

    // Read and display population data for each year
    for (int i = 0; i < 6; ++i) {
        inputFile >> population;
        std::cout << years[i] << " ";

        // Display asterisks based on population
        for (int j = 0; j < population / 1000; ++j) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
