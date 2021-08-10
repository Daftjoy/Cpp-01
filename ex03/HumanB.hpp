/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:59 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:38:00 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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