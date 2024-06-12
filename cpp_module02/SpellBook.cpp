#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell*spell)
{
    if (_spellbook.find(spell->getName()) == _spellbook.end())
			_spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
    if (_spellbook.find(spell) != _spellbook.end())
		_spellbook.erase(_spellbook.find(spell));
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    return(_spellbook[spell]);
}
