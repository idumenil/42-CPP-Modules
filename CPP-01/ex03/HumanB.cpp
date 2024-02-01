#include "HumanB.hpp"

/***************
 * Constructor *
 * *************/
HumanB::HumanB( std::string name ) : _name(name) {
    this->_weapon = NULL;
    return;
}

/**************
 * Destructor *
 **************/
HumanB::~HumanB( void ) {
    return;
}

/********************
 * Member functions *
 ********************/
void HumanB::setWeapon( Weapon& newWeapon) {
    this->_weapon = &newWeapon;
}

void HumanB::attack( void ) const {
    if (this->_weapon != NULL && this->_weapon->getType() != "") {
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    } else {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}
