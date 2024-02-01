#include "HumanA.hpp"

/***************
 * Constructor *
 * *************/

//Weapon is a reference since it exists from creation until destruction, and never changes
HumanA::HumanA( std::string name, Weapon& type ) : _name(name), _type(type) {
    return;
}

/**************
 * Destructor *
 **************/

HumanA::~HumanA( void ) {
    return;
}

/********************
 * Member functions *
 ********************/

void HumanA::attack( void ) const {
    if (_type.getType() != "") {
        std::cout << this->_name << " attacks with their " << _type.getType() << std::endl;
    }
    else {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}
