#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie *zombieHorde(int num, const std::string &name) 
{
    Zombie *horde = new Zombie[num];
    int i = 0;
    while (i < num) 
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}
