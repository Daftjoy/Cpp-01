/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:36:49 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 16:36:50 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name="");
        ~Zombie();
        void announce();

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
