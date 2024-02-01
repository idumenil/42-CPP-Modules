#include "Weapon.hpp"

/***************
 * Constructor *
 * *************/
Weapon::Weapon( std::string name ) {
    this->_type = name;
    return;
}

/**************
 * Destructor *
 **************/
Weapon::~Weapon( void ) {
    return;
}

/********************
 * Member functions *
 ********************/
//const because a getter has read-access only
const std::string& Weapon::getType( void ) {
    return this->_type;
}

void Weapon::setType( std::string type ) {
    this->_type = type;
}
