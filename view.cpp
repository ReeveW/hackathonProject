#include "view.h"
#include <iostream>

std::string View::ask() {
    std::string input;
    std::cout << "Enter a Programming Language Guess: ";
    std::cin >> input;
    return input;
}
