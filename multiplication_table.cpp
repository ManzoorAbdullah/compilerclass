#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid input\n";
        return 1;
    }

    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << number * i << '\n';
    }

    return 0;
}
