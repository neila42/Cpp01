#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce() const;
    std::string getName() const;
    void setName(const std::string &name);

private:
    std::string _name;
};

Zombie *zombieHorde(int num, const std::string &name);

#endif
