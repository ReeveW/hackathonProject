#include "Controller.h"
#include "Model.h"
#include "View.h"
#include "Languages.h"
#include <iostream>
#include <string>

int main() {
    Model m;
    View v;
    Controller c(m, v);

    c.run();

    return 0;
}
