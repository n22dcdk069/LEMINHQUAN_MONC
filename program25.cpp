#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream inputFile("LineUp.txt"); // Open the input file

    if (!inputFile) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }

    std::vector<std::string> names; // Vector to store the names

    std::string name;
    while (std::getline(inputFile, name)) {
        names.push_back(name); // Read names from the file and store them in the vector
    }

    inputFile.close(); // Close the input file

    // Display the original order of names
    std::cout << "Original Order of Names:" << std::endl;
    for (const std::string& n : names) {
        std::cout << n << std::endl;
    }

    // Display the reversed order of names
    std::cout << "\nReversed Order of Names:" << std::endl;
    for (int i = names.size() - 1; i >= 0; --i) {
        std::cout << names[i] << std::endl;
    }

    return 0;
}
