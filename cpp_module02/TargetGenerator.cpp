#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget*spell)
{
    if (_target.find(spell->getType()) == _target.end())
			_target[spell->getType()] = spell->clone();
}

void TargetGenerator::forgetTargetType(std::string const &spell)
{
    if (_target.find(spell) != _target.end())
		_target.erase(_target.find(spell));
}

ATarget* TargetGenerator::createTarget(std::string const &spell)
{
    return(_target[spell]);
}
