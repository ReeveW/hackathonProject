#pragma once

#include "Languages.h"
#include <string>

class Model {
    private:
        LanguageData answer;
    public:
        Model();
        ~Model() = default;
        std::string memoryGuess(MemoryManagement mem);
        std::string parentGuess(ParentLanguage p);
        std::string implementationGuess(Implementation i);
        std::string levelGuess(Level level);
        std::string yearGuess(int year);
        std::vector<std::string> guess(std::string guess);
        bool isRight(std::string guess);
        bool isValidGuess(std::string guess);
        std::string getFact();
};
