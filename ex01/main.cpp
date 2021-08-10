/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:36:46 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:36:47 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(3, "Carlos");
    
    for (int i = 0; i < 3; i++)
    {
        zombies[i].announce();
    }
    system("leaks ZombieHorde");
}