#include "Harl.hpp"
#include <iostream>

Harl::Harl() 
{
    std::cout << "Constructor Harl" << std::endl;
}

Harl::~Harl() 
{
    std::cout << "Destructor Harl" << std::endl;
}

void Harl::debug(void) 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) 
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) 
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::complain(std::string level) 
{
    void (Harl::*func[4])(void);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    func[0] = &Harl::debug;
    func[1] = &Harl::info;
    func[2] = &Harl::warning;
    func[3] = &Harl::error;

    int i = 0;
    while (i < 4)
    {
        if (level == levels[i]) 
        {
            (this->*func[i])();
            return (0);
        }
        i++;
    }
    std::cout << "Error level doesn't exist" << std::endl;
    return (1);
}
