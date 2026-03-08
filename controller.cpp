#include "Controller.h"
#include <iostream>
#include <iomanip>

Controller::Controller(Model &model, View &view) 
    : model(model), view(view) {}

void Controller::run() {
    std::cout << "Welcome to Howardle! A -dle style game for programming languages!\n";
    std::cout << std::endl;

    while (true) {
        std::string guess = view.ask();

        //making sure that the language guess is a valid one
        while(!model.isValidGuess(guess)) {
            std::cout << "Invalid Language Guess.\nPlease choose between C++ and Python.\n";
            std::cout << std::endl;
            guess = view.ask();
        }

        printHeader();
        auto ans = model.guess(guess);
        printAns(ans);

        if (model.isRight(guess)) {
                std::cout << "\nCorrect!!\n";
                std::cout << "Fun Fact: " << model.getFact() << "Thanks for playing!\n";
                break;
        }

        std::cout << std::endl;
    }
}

void Controller::printHeader() {
        std::cout << std::left
            << std::setw(6)  << "Year" << " | " 
            << std::setw(12) << "Level" << " | " 
            << std::setw(16) << "Implementation"  << " | " 
            << std::setw(18) <<  "Parent Language"  << " | " 
            << std::setw(20) <<  "Memory Management"
            << std::endl;

        std::cout << "---------------------------------------------------------------------------------\n";

}

void Controller::printAns(const std::vector<std::string>& v) {
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
