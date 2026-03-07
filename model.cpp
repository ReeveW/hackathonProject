#include <string>
#include "model.h"

Model::Model() {
    // get a random number, and then whatever that number is we use that porgramming language
}

std::string Model::yearGuess(int year) {
    if(answer.releaseYear == year) {
        // green
    }else if(answer.releaseYear > year){
        if(answer.releaseYear - 5 > year){
            //red
        }else{
            //yellow
        }
    }else{
        if(answer.releaseYear + 5 < year){
            // red
        }else{
            //yellow
        }
    }
}

std::string Model::levelGuess(Level level){
    if(answer.level == level){
        //green
    }else{
        // red
    }
}

std::string Model::memoryGuess(MemoryManagement mem) {
    if(answer.mem == mem){
        //green
    }else{
        //red
    }
}

std::string Model::parentGuess(ParentLanguage p) {
    if(answer.parentLanguage == p){
        //green
    }else{
        //red
    }
}

std::string Model::implementationGuess(Implementation i) {
    if(answer.implementation == i){
        //green
    }else if(answer.implementation == Implementation::Hybrid){
        //orange
    }else{
        //red
    }
}

std::string Model::guess(std::string guess) {
    
}

bool Model::isValidGuess(std::string guess){
    
}
