#include <iostream>
#include <string>

int main() 
{
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "Adress str:" << &str << std::endl;
    std::cout << "Adress ptr:" << stringPTR << std::endl;
    std::cout << "Adress ref:" << &stringREF << std::endl;

    std::cout << "Value str:" << str << std::endl;
    std::cout << "Value ptr:" << *stringPTR << std::endl;
    std::cout << "Value ref:" << stringREF << std::endl;

    return (0);
}
