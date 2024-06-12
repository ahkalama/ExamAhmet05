#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock() {}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (name);
}

std::string const & Warlock::getTitle() const
{
	return (title);
}

void	Warlock::setTitle(std::string const & str)
{
	title = str;
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
		if (_spellbook.find(spell->getName()) == _spellbook.end())
			_spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string SpellName)
{
	if (_spellbook.find(SpellName) != _spellbook.end())
		_spellbook.erase(_spellbook.find(SpellName));
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_spellbook.find(SpellName) != _spellbook.end())
		_spellbook[SpellName]->launch(target);
}
