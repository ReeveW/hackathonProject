#pragma once

#include "Model.h"
#include <string>

class View {
    public:
        std::string ask();
        void printHeader();
        void printAns(const std::vector<std::string>& v);
        void start();
        void errorMess();
        //void winMess();
};
