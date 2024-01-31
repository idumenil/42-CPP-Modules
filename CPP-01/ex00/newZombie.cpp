#include "Zombie.hpp"

//creates a zombie, name it, and return it so it can be used outside the function scope
Zombie* newZombie( std::string name ) {
    return (new Zombie( name ));
}