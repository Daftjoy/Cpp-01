/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:38:38 by antmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:11:48 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

void replace(char **argv)
{
    std::ifstream infile;
    std::ofstream outfile;
    std::string line;
    std::string out;
    int pos;
    
    chmod(argv[1], S_IRWXU|S_IRWXG|S_IROTH|S_IWOTH);
    infile.open(argv[1], std::ifstream::in);
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
        if (out.size() > 0)
            out.erase(out.size() - 1, 1);
    }
    else
    {
        std::cout << "Error: file not found" << std::endl;
        return;
    }
    infile.close();
    outfile.open(argv[1]);
    if (outfile.is_open())
        outfile << out;
    outfile.close();
}

int main(int argc, char **argv)
{
    if(argc == 4)
        replace(argv);
    else
        std::cout << "Wrong Arguments" << std::endl; 
}