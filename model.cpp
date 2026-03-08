#include "Model.h"
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctime>

Model::Model() {
    srand(time(0));
    int n = rand() % languages.size();
    answer = languages[n];
}

std::string colour(std::string c) {
    if(c == "red") {
        return "\033[31m";
    } else if(c == "green") {
        return "\033[32m";
    } else if(c == "yellow") {
        return "\033[33m";
    }
    return "\033[0m";
}

std::string Model::yearGuess(int year) {
    std::string s;

    if(answer.releaseYear == year) {
        s = colour("green") + std::to_string(year);
    } else if(answer.releaseYear > year) {
        if(answer.releaseYear - 5 > year) {
            s = colour("red") + std::to_string(year);
        } else {
            s = colour("yellow") + std::to_string(year);
        }
    } else {
        if(answer.releaseYear + 5 < year) {
            s = colour("red") + std::to_string(year);
        } else {
            s = colour("yellow") + std::to_string(year);
        }
    }
    return s;
}

std::string Model::levelGuess(Level level) {
    std::string l, s;
    if(level == Level::High) {
        l = "High-Level";
    }else {
        l = "Low-Level";
    }
    if(answer.level == level) {
        s = colour("green") + l;
    } else {
        s = colour("red") + l;
    }
    return s;
}

std::string Model::memoryGuess(MemoryManagement mem) {
    std::string l, s;
    if(mem == MemoryManagement::GarbageCollected) {
        l = "Garbage Collected";
    } else {
        l = "Manual";
    }
    if(answer.mem == mem) {
        s = colour("green") + l;
    } else {
        s = colour("red") + l;
    }
    return s;
}

std::string Model::parentGuess(ParentLanguage p) {
    std::string l, s;
    if(p == ParentLanguage::C) {
        l = "C";
    } else {
        l = "ABC";
    }
    if(answer.parentLanguage == p) {
        s = colour("green") + l;
    } else {
        s = colour("red") + l;
    }
    return s;
}

std::string Model::implementationGuess(Implementation i) {
    std::string l, s;
    if(i == Implementation::Compiled) {
        l = "Compiled";
    } else if(i == Implementation::Hybrid) {
        l = "Hybrid";
    } else {
        l = "Interpreted";
    }
    if(answer.implementation == i) {
        s = colour("green") + l;
    } else if(answer.implementation == Implementation::Hybrid) {
        s = colour("yellow") + l;
    } else {
        s = colour("red") + l;
    }
    return s;
}

std::vector<std::string> Model::guess(std::string guess) {
    LanguageData guessLanguage;
    for(auto l : languages) {
        if(l.name == guess) {
            guessLanguage = l;
        }
    }
    std::vector<std::string> v(5);
    v[0] = (yearGuess(guessLanguage.releaseYear));
    v[1] = (levelGuess(guessLanguage.level));
    v[2] = (implementationGuess(guessLanguage.implementation));
    v[3] = (parentGuess(guessLanguage.parentLanguage));
    v[4] = (memoryGuess(guessLanguage.mem) + colour("white"));
    return v;
}

bool Model::isValidGuess(std::string guess) {
    for(auto l : languages){
        if(l.name == guess){
            return true;
        }
    }
    return false;
}

bool Model::isRight(std::string guess) {
    if(guess == answer.name){
        return true;
    } else { 
        return false;
    }
}

std::string Model::getFact() {
    return answer.fact;
}
