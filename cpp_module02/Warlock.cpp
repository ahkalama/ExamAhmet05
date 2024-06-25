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

// AHKALAMA
// Bu kısımda aşağıda spellbook sınıfından fonksiyonları çağırmamızı istiyor, fakat siz çağırmak yerine
// direkt spellbook'un içindeki fonksiyonların içeriğini burda oluşturabilirsiniz. Sınavda geçiyor.

void Warlock::learnSpell(ASpell* spell)
{
	_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName)
{
	_spellbook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	_spellbook.createSpell(SpellName)->launch(target);
}
