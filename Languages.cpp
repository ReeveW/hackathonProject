#include "Languages.h"

std::vector<LanguageData> languages = {
    {"C++", 1985, Level::Low, Implementation::Compiled, ParentLanguage::C, MemoryManagement::Manual, "banana\n"},
    {"Python", 1991, Level::High, Implementation::Interpreted, ParentLanguage::ABC, MemoryManagement::GarbageCollected, "Python was named after Monty Python, not the snake.\n"}
};
