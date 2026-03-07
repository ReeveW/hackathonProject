#include "controller.h"
#include "model.h"
#include "view.h"
#include "Languages.h"

#include <iostream>
#include <string>

int main(){
    Model m;
    View v;
    // Controller c(m, v);
    std::string s = m.guess("C++");
    std::cout << s << std::endl;
    return 0;
}