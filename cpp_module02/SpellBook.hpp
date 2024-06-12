#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string, ASpell *> _spellbook;

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell*spell);
        void forgetSpell(std::string const &spell);
        ASpell* createSpell(std::string const &spell);
};
