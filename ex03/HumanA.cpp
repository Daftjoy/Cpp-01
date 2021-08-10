/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:46 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:47 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &Weapon) :
_Weapon(&Weapon)
{
    this->name = name;
    this->_Weapon = &Weapon;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << *this->_Weapon->getType() << std::endl;
}
