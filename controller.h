#pragma once

#include "Model.h"
#include "View.h"
#include <string>
#include <vector>

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
