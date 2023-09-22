#include <iostream>

int main() {
    // Loop through ASCII codes 0 to 127
    for (int i = 0; i <= 127; ++i) {
        // Display the character
        std::cout << static_cast<char>(i) << ' ';

        // Display 16 characters per line
        if ((i + 1) % 16 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
