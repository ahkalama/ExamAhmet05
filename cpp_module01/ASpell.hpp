#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell 
{
	protected :
		std::string _name;
		std::string _effects;
	
	public :
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const & target) const;
};