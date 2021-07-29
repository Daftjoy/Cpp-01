#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &Weapon) :
_Weapon(&Weapon)
{
    this->name = name;
    this->_Weapon = &Weapon;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << *this->_Weapon->getType() << std::endl;
}
