/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:06 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:07 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i]= Zombie( name );
    };

    return (&zombies[0]);
}