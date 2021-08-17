/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:38:12 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:38:13 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const char *type) 
{
    this->type = type;
}

Weapon::~Weapon()
{}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(const char *type)
{
    this->type = type;
}