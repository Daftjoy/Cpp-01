/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:39:28 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:39:29 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    std::string s;

    int opt;

    if (argc == 2)
    {
        opt = karen.complain(argv[1]);
        switch(opt)
        {
            case 0:
                std::cout << "[ DEBUG ]" << std::endl;
                karen.debug();
            
            case 1:
                std::cout << "[ INFO ]" << std::endl;
                karen.info();
            
            case 2:
                std::cout << "[ WARNING ]" << std::endl;
                karen.warning();
            
            case 3:
                std::cout << "[ ERROR ]" << std::endl;
                karen.error();
                break;

            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    else
        std::cout << "Wrong Number of arguments" << std::endl;
}