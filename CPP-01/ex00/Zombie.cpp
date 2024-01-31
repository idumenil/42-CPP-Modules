#include "Zombie.hpp"

/***************
 * Constructor *
 * *************/
Zombie::Zombie( std::string name ) {
    this->_name = name;
    return;
}

/**************
 * Destructor *
 **************/
Zombie::~Zombie( void ) {
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
    return;
}

/********************
 * Member functions *
 ********************/

void Zombie::announce( void ) {
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

