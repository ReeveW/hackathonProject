#include <string>
#include "model.h"

Model::Model()
{
    // get a random number, and then whatever that number is we use that porgramming language
}

std::string Model::yearGuess(int year)
{
    if(answer.releaseYear == year){
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

std::string Model::implementationGuess(Implementation implementation){

}

std::string Model::memoryGuess(MemoryManagement memoryManagement){

}

std::string Model::parentGuess(std::string parentLanguage){

}


