/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:36:44 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 18:03:59 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):
name(name)
{}

Zombie::~Zombie()
{
    std::cout << this->name << " is dying again" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name  << " BraiiiiiiinnnzzzZ..." << std::endl;
}
