#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *zomb;

    zomb = newZombie(name);
    zomb->announce();
    delete(zomb);
}