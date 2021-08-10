/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:38:38 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/10 18:13:15 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
# include <string>

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::ifstream infile;
        std::ofstream outfile;
        std::string line;
        std::string out;
        int pos;
        infile.open(argv[1]);
        if (infile.is_open())
        {
            while(std::getline(infile, line))
            {
                while ((pos = line.find(argv[2])) >= 0)
                {   
                    line.erase(pos, strlen(argv[2]));
                    line.insert(pos, argv[3]);
                }
                out.append(line);
                out.append("\n");
            }
            out.erase(out.size() - 1, 1);
        }
        infile.close();
        outfile.open(argv[1]);
        if (outfile.is_open())
            outfile << out;
        outfile.close();
    }
    else
        std::cout << "Wrong Arguments" << std::endl;
}