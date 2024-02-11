#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Clapy");

    claptrap.displayStatus();

    claptrap.attack("Jules");
    claptrap.beRepaired(1);
    claptrap.takeDamage(1);

    claptrap.displayStatus();

    return 0;
}

