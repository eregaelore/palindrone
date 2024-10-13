#include <iostream>

bool is_palindrome(int x) {
    if (x < 0) {
        return false; // Negative numbers cannot be palindromes
    }

    int reversed_x = 0;
    int original_x = x;

    while (x > 0) {
        int last_digit = x % 10;
        reversed_x = reversed_x * 10 + last_digit;
        x /= 10;
    }

    return reversed_x == original_x;
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (is_palindrome(x)) {
        std::cout << x << " is a palindrome." << std::endl;
    } else {
        std::cout << x << " is not a palindrome." << std::endl;
    }

    return 0;
}