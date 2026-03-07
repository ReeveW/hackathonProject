#pragma once

#include <string>
#include <vector>

enum class Level
{
    High,
    Low
};

enum class Implementation
{
    Compiled,
    Interpreted,
    Hybrid
};

enum class MemoryManagement
{
    Manual,
    GarbageCollected
};

enum class ParentLanguage
{
    C,
    ABC,
    Java,
};

struct LanguageData
{
    std::string name;
    int releaseYear;
    Level level;
    Implementation implementation;
    ParentLanguage parentLanguage;
    MemoryManagement mem;
};

extern std::vector<LanguageData> languages;
