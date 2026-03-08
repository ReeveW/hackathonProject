#include "Controller.h"
#include <iostream>

Controller::Controller(Model &model, View &view) 
    : model(model), view(view) {}

void Controller::run() {
    view.start();

    while (true) {
        std::string guess = view.ask();

        while(!model.isValidGuess(guess)) {
            view.errorMess();
            guess = view.ask();
        }

        view.printHeader();
        auto ans = model.guess(guess);
        view.printAns(ans);

        if (model.isRight(guess)) {
                std::cout << "\nCorrect!!\n";
                std::cout << "Fun Fact: " << model.getFact() << "Thanks for playing!\n";
                break;
        }

        std::cout << std::endl;
    }
}
