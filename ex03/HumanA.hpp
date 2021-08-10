/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:52 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:53 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define  HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *_Weapon;
        std::string name;
    public:
        HumanA(const char *name, Weapon &Weapon);
        ~HumanA();
        void attack();
};

#endif