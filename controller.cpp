#include "controller.h"
#include <iostream>

Controller::Controller(Model &model, View &view) 
    : model(model), view(view) {}

void Controller::run() {
    std::cout << "Welcome to Howardle! A -dle style game for programming languages!\n";

    while (true) {
        std::string guess = view.ask();

        //making sure that the language guess is a valid one
        while(!model.isValidGuess(guess)) {
            std::cout << "Invalid Language Guess.\nPlease choose between C++ and Python.\n";
            std::cout << std::endl;
            guess = view.ask();
        }

        std::string ans = model.guess(guess);
        std::cout << ans << std::endl;

        if (model.isRight(guess)) {
                std::cout << "Corerct!!\n";
                break;
        }
    }
}
