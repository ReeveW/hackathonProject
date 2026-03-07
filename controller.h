#pragma once
#include "model.h"
#include "view.h"
#include <string>

class Controller {
    public:
        Controller(Model &model, View &view);
        void run();

    private:
        Model &model;
        View &view;
};
