/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:38:17 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:38:18 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>

class Weapon
{
    private:
        std::string type;
   
    public:
        Weapon(const char *type);
        ~Weapon();
        const std::string *getType(void);
        void setType(const char *type);
};

#endif