#include <iostream>

int main() {
    int n = 10; // The number of rows for Pattern A and Pattern B

    // Pattern A
    std::cout << "Pattern A" << std::endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    // Pattern B
    std::cout << "\nPattern B" << std::endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}
