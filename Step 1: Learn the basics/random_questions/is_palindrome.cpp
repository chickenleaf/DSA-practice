#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(const std::string& str) {
    std::string filteredStr;
    for (char ch : str) {
        if (std::isalnum(ch)) {
            filteredStr += std::tolower(ch);
        }
    }

    std::string reversedStr = filteredStr;
    std::reverse(reversedStr.begin(), reversedStr.end());

    return filteredStr == reversedStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}