#include "View.h"
#include <iostream>
#include <cctype>
#include <algorithm>

std::string View::ask() {
    std::string input;
    std::cout << "Enter a Programming Language Guess: ";
    std::cin >> input;
    std::transform(input.begin(), input.end(), input.begin(), 
        [](unsigned char c){ return std::tolower(c); });
    return input;
}
