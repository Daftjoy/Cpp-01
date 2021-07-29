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
                if ((pos = line.find(argv[2])) >= 0)
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