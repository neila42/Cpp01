#include "Zombie.hpp"
#include <iostream>

int main() 
{
    std::cout << "Creating a zombie (heap)" << std::endl;
    Zombie *heapZombie = newZombie("newZombie");
    heapZombie->announce();

    std::cout << "Creating a random chump (stack)" << std::endl;
    randomChump("randomChump");

    std::cout << "Deleting (heap) zombie" << std::endl;
    delete heapZombie;

    return (0);
}

