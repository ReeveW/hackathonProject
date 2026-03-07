#include "Languages.h"

std::vector<LanguageData> languages = {{"C++", 1985, Level::Low, 
    Implementation::Compiled, ParentLanguage::C, MemoryManagement::Manual},
{"Python", 1991, Level::High, Implementation::Interpreted, ParentLanguage::ABC,
MemoryManagement::GarbageCollected}, {"JavaScript", 1995, Level::High, Implementation::Hybrid, ParentLanguage::Java, MemoryManagement::GarbageCollected}};