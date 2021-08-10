/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:37:33 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:37:34 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main(void)
{
    std::string str("HI THIS IS BRAIN");
    std::string *ptr(&str);
    std::string &ref(str);

    std::cout << "The pointer memory address is: " << ptr << std::endl;
    std::cout << "The reference memory address is: " << &ref << std::endl;
    std::cout << "The pointer value is: " << *ptr << std::endl;
    std::cout << "The reference value is: " << ref << std::endl;
}