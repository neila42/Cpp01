#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : name(name) 
{
    std::cout << "Zombie \"" << name << "\" Constructor called" << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << "Zombie \"" << name << "\" Destructor called" << std::endl;
}

void Zombie::announce() const 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
