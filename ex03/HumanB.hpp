#ifndef HUMANB_HPP
# define  HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *_Weapon;
        std::string name;
    public:
        HumanB(const char *name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &Weapon);
};

#endif