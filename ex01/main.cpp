#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(3, "Carlos");
    
    for (int i = 0; i < 3; i++)
    {
        zombies[i].announce();
    }
    system("leaks ZombieHorde");
}