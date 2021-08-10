/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:39:24 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 17:39:25 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <fstream>
# include <string>

class Karen
{
    public:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        Karen(void);
        ~Karen(void);
        int complain(std::string level);
};
#endif