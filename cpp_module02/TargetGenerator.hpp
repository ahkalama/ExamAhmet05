#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"
asdasd
class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> _target;

    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*spell);
        void forgetTargetType(std::string const &spell);
        ATarget* createTarget(std::string const &spell);
};
