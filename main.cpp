#include <iostream>
#include <string>
#include "controller.h"
#include "model.h"
#include "view.h"
#include "Languages.h"

int main(){
    Model m;
    View v;
    Controller c(m, v);
    c.run();
    return 0;
}