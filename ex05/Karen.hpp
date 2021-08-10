/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:39:06 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:39:07 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <fstream>
# include <string>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Karen(void);
        ~Karen(void);
        void complain(std::string level);
};
#endif