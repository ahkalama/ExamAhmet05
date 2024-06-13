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
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName)
{
	_spellBook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_spellBook.createSpell(SpellName))
		_spellBook.createSpell(SpellName)->launch(target);
}
