#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

//HumanB has a pointer weapon since the field is not set at the creation time
//and can be null
class HumanB {
public:
    HumanB( std::string name );
    ~HumanB( void );

    void setWeapon(Weapon& weapon);
    void attack( void ) const;

private:
    std::string _name;
    Weapon*     _weapon;
};

#endif