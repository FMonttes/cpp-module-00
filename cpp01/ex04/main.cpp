#include <iostream>
#include <string>
#include <fstream>


void ft_replace(char **argv, std::string line)
{
    std::ofstream output_file((std::string(argv[1]) + ".replace").c_str(), std::ofstream::app);

    if (!output_file.is_open())
    {
        std::cout << "Error: Can't open file" << std::endl;
        return;
    }

    size_t find_len = std::string(argv[2]).length();
    size_t pos = 0;
    while ((pos = line.find(argv[2])) != std::string::npos)
    {
        output_file << line.substr(0, pos) << argv[3];
        pos += find_len;
        line = line.substr(pos);
    }

    output_file << line << std::endl;
    output_file.close();
}

int main(int argc, char **argv)
{
    std::string line;
    std::ifstream input_file;

    
    if (argc == 4)
    {
        input_file.open(argv[1]);
        if (!input_file.is_open())
        {
            std::cout << "Error: Can't open file" << std::endl;
            return 1;
        }

        while (std::getline(input_file, line))
            ft_replace(argv, line);
        input_file.close();
    }
    else
        std::cout << "Error: Wrong number of arguments" << std::endl;
}