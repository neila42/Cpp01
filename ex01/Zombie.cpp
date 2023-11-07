#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() 
{
    std::cout << "Zombie constructor" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) 
{
    std::cout << "Zombie \"" << _name << "\" constructor" << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << "Zombie \"" << _name << "\" destructor" << std::endl;
}

void Zombie::announce() const 
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const 
{
    return _name;
}

void Zombie::setName(const std::string &name) 
{
    _name = name;
}
