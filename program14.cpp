#include <iostream>
#include <string>

int main() {
    int numStudents;
    std::string firstName, firstInLine, lastInLine;

    // Ask the user for the number of students in the class
    std::cout << "Enter the number of students in the class (between 1 and 25): ";
    std::cin >> numStudents;

    // Input validation: Ensure the number of students is within the specified range
    while (numStudents < 1 || numStudents > 25) {
        std::cout << "Please enter a valid number of students (between 1 and 25): ";
        std::cin >> numStudents;
    }

    // Loop to read the names of students
    for (int i = 1; i <= numStudents; ++i) {
        std::cout << "Enter the name of student " << i << ": ";
        std::cin >> firstName;

        // If it's the first student, set them as both first and last in line
        if (i == 1) {
            firstInLine = firstName;
            lastInLine = firstName;
        } else {
            // Compare names to update first and last in line
            if (firstName < firstInLine) {
                firstInLine = firstName;
            }
            if (firstName > lastInLine) {
                lastInLine = firstName;
            }
        }
    }

    // Display the student at the front and end of the line
    std::cout << "Student at the front of the line: " << firstInLine << std::endl;
    std::cout << "Student at the end of the line: " << lastInLine << std::endl;

    return 0;
}
