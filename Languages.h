#pragma once

#include <string>
#include <vector>

enum class Level {
    High,
    Low
};

enum class Implementation {
    Compiled,
    Interpreted,
    Hybrid
};

enum class MemoryManagement {
    Manual,
    GarbageCollected,
    ARC,
};

enum class ParentLanguage {
    C,
    ABC,
    Java,
    None,
    B,
    JavaScript,
};

struct LanguageData {
    std::string name;
    int releaseYear;
    Level level;
    Implementation implementation;
    ParentLanguage parentLanguage;
    MemoryManagement mem;
    std::string fact;
};

extern std::vector<LanguageData> languages;
