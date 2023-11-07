#include <iostream>
#include <fstream>
#include <sstream>

std::string replaceStr(std::string source, const std::string &str1, const std::string &str2) 
{
    std::ostringstream result;
    size_t pos = 0;

    while (pos < source.length()) 
    {
        size_t found_pos = source.find(str1, pos);
        if (found_pos != std::string::npos) //find renvoie npos si pas trouvé
        {
            result << source.substr(pos, found_pos - pos);
            result << str2;
            pos = found_pos + str1.length();
        } 
        else 
        {
            result << source.substr(pos);
            break;
        }
    }
    return result.str();
}

int replaceInfile(const std::string &infile, const std::string &str1, const std::string &str2) 
{
    std::ifstream input_file(infile);
    if (!input_file.is_open()) 
    {
        std::cerr << "Error input file" << std::endl;
        return (1);
    }
    std::string outfile = infile + ".replace";
    std::ofstream output_file(outfile);
    if (!output_file.is_open()) 
    {
        std::cerr << "Error output file" << std::endl;
        input_file.close();
        return (1);
    }
    std::string line;
    
    while (getline(input_file, line)) 
        output_file << replaceStr(line, str1, str2) << std::endl;

    input_file.close();
    output_file.close();
    return (0);
}

int main(int argc, char **argv) 
{
    if (argc != 4) 
    {
        std::cerr << "4 argc only : prog, infile, str1, str2" << std::endl;
        return (1);
    }
    std::string infile = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];
    replaceInfile(infile, str1, str2);

    return (0);
}
