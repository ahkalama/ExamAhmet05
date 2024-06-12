#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        std::map<std::string, ASpell *> _spellbook;

    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &set);
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spell);
        void launchSpell(std::string spell, ATarget const &target);

};
