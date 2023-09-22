#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("Random.txt");

    if (!inputFile) {
        std::cerr << "Error: Could not open the file." << std::endl;
        return 1;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        sum += number;
        count++;
    }

    inputFile.close();

    if (count == 0) {
        std::cout << "The file is empty." << std::endl;
    } else {
        double average = static_cast<double>(sum) / count;

        std::cout << "Number of numbers in the file: " << count << std::endl;
        std::cout << "Sum of all the numbers: " << sum << std::endl;
        std::cout << "Average of all the numbers: " << average << std::endl;
    }

    return 0;
}
