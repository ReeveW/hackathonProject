#include "controller.h"
#include "model.h"
#include "view.h"
#include "Languages.h"

#include <iostream>
#include <string>

int main(){
    Model m;
    View v;
    Controller c(m, v);
    c.run();
    return 0;
}