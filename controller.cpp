#include "controller.h"
#include <iostream>

void Controller::run(Model &model, View &view) {
    std::cout << "Welcome to Howardle! A -dle style game for programming languages!\n";

    while (true) {
        std::string guess = view.ask();

        //making sure that the language guess is a valid one
        while(!model.isValidGuess(guess)) {
            std::cout << "Invalid Language Guess.\nPlease choose between C++, Java, and Python.\n";
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
