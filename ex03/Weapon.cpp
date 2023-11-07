#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string &type) : _type(type) 
{
    std::cout << "Constructor Weapon" << std::endl;
}

const std::string &Weapon::getType() const 
{
    return _type;
}

void Weapon::setType(const std::string &newType) 
{
    _type = newType;
}
