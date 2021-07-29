#include "Weapon.hpp"

Weapon::Weapon(const char *type) 
{
    this->type = type;
}

Weapon::~Weapon()
{}

const std::string *Weapon::getType(void)
{
    return (&this->type);
}

void Weapon::setType(const char *type)
{
    this->type = type;
}