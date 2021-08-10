/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:39:10 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:39:11 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen karen;


    karen.complain("debug");
    karen.complain("info");

    karen.complain("warning");
    karen.complain("warnin");

    karen.complain("error");
    karen.complain("wfasfasfsaf");

    karen.complain("hola");
    karen.complain("");
}