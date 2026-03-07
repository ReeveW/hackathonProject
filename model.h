#pragma once

#include <string>
#include "Languages.h"


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
        std::string guess(std::string guess);
        bool isRight(std::string guess);
        bool isValidGuess(std::string guess);
};