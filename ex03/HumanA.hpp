#ifndef HUMANA_HPP
# define  HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *_Weapon;
        std::string name;
    public:
        HumanA(const char *name, Weapon &Weapon);
        ~HumanA();
        void attack();
};

#endif