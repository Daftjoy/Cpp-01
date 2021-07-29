#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>

class Weapon
{
    private:
        std::string type;
   
    public:
        Weapon(const char *type);
        ~Weapon();
        const std::string *getType(void);
        void setType(const char *type);
};

#endif