#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
public:
    HumanA(const std::string &name, Weapon &weapon); //ref weapon donc toujours armé
    void attack();

private:
    std::string _name;
    Weapon &_weapon;
};

#endif
