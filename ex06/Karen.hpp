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