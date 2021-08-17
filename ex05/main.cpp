/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:39:10 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/13 18:30:18 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen karen;


    karen.complain("DEBUG");
    karen.complain("INFO");

    karen.complain("WARNING");
    karen.complain("warnin");

    karen.complain("ERROR");
    karen.complain("wfasfasfsaf");

    karen.complain("HOLA");
    karen.complain("");
}