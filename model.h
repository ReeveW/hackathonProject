#pragma once
#include <string>

enum class Level {
    High, Low
};

enum class Implementation {
    Compiled, Interpreted
};

enum class MemoryManagement {
    Manual, GarbageCollected, 
};

struct LanguageData {
    std::string name;
    int releaseYear;
    Level level;
    Implementation implementation;
    std::string parentLanguage;
    MemoryManagement mem;
};



class Model {
    private:
    LanguageData answer;
    public:
    Model();
    ~Model();
    std::string memoryGuess(MemoryManagement mem);
    std::string parentGuess(std::string p);
    std::string implementationGuess(Implementation i);
    std::string levelGuess(Level level);
    std::string yearGuess(int year);
    std::string guess(std::string language);
};