#pragma once
#include "model.h"
#include "view.h"
#include <string>

class Controller {
    public:
        void run(Model &model, View &view);
};
