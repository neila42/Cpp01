#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
public:
    HumanB(const std::string &name);
    void setWeapon(Weapon &newWeapon);
    void attack();

private:
    std::string _name;
    Weapon *_weapon;
};

#endif
