#include "View.h"
#include <iostream>
#include <cctype>
#include <algorithm>
#include <iomanip>

std::string View::ask() {
    std::string input;
    std::cout << "Enter a Programming Language Guess: ";
    std::getline(std::cin, input);
    std::transform(input.begin(), input.end(), input.begin(), 
        [](unsigned char c){ return std::tolower(c); });
    return input;
}

void View::printHeader() {
        std::cout << std::left
            << std::setw(6)  << "Year" << " | " 
            << std::setw(12) << "Level" << " | " 
            << std::setw(16) << "Implementation"  << " | " 
            << std::setw(18) <<  "Parent Language"  << " | " 
            << std::setw(20) <<  "Memory Management"
            << std::endl;

        std::cout << "---------------------------------------------------------------------------------\n";

}

void View::printAns(const std::vector<std::string>& v) {
    for (int i = 0; i < 5; i++) {
        std::string color = "";
        std::string res = v[i];

        color = res.substr(0, 5);
        res = res.substr(5);

        std::cout << color << std::left << std::setw(
            i == 0 ? 6 :
            i == 1 ? 12 :
            i == 2 ? 16 :
            i  == 3 ? 18 : 20
        ) << res << "\033[0m";

        if (i < 4) std::cout << " | ";
    }

    std::cout << std::endl;
}

void View::start() {
    std::cout << "Welcome to Howardle! A -dle style game for programming languages!\n";
    std::cout << std::endl;
}

void View::errorMess() {
    std::cout << "Invalid Language Guess.\nPlease choose between C++ and Python.\n";
    std::cout << std::endl;
}
