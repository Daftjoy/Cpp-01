#include "HumanB.hpp"

HumanB::HumanB(const char *name)
{
    this->name = name;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << *this->_Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->_Weapon = &Weapon;
}