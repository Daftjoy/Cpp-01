#include "Zombie.hpp"

Zombie::Zombie(std::string name):
name(name)
{}

Zombie::~Zombie()
{
    std::cout << "I'm dying again" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name  << " Braiiiiiiinnnssss ..." << std::endl;
}
