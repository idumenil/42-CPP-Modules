#include "Zombie.hpp"

//creates a zombie, name it, and the zombie annonces itself
void randomChump( std::string name ) {
    Zombie zombie( name );
    zombie.announce();
}