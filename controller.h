#pragma once

#include <string>
#include <vector>
#include "model.h"
#include "view.h"

class Controller {
    public:
        Controller(Model &model, View &view);
        void run();
        void printHeader();
        void printAns(const std::vector<std::string>& v);

    private:
        Model &model;
        View &view;
};
