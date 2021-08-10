/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:55 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:56 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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