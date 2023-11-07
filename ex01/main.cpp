#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    if (argc != 3) 
    {
        std::cout << "program needs 3 args : prog, name, number" << std::endl;
        return (1);
    }

    std::string name = argv[1];
    int numZombie = std::atoi(argv[2]);

    if (numZombie <= 0) 
    {
        std::cout << "positiv num of zombie only" << std::endl;
        return (1);
    }

    std::cout << "num zombie to create: " << numZombie << "name" << name << std::endl;
    Zombie* horde = zombieHorde(numZombie, name);

    std::cout << "Creating horde" << std::endl;
    int i = 0;
    while (i < numZombie) 
    {
        horde[i].announce();
        i++;
    }
    std::cout << "Deleting horde" << std::endl;
    delete[] horde;

    return (0);
}
