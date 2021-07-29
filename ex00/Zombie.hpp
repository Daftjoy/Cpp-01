#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name="");
        ~Zombie();
        void announce();

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif