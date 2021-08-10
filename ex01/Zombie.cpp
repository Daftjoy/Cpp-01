/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:36:54 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:36:55 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):
name(name)
{}

Zombie::~Zombie()
{
    std::cout << "I'm dying again" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name  << " BraiiiiiiinnnzzzZ..." << std::endl;
}
