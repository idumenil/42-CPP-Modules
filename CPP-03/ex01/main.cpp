#include "ScavTrap.hpp"

int main() {

    ScavTrap scavtrap("Scavy");

    std::cout << std::endl;
    scavtrap.displayStatus();
    std::cout << std::endl;

    scavtrap.attack("François");
    scavtrap.beRepaired(5);
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(5);
    scavtrap.guardGate();

    std::cout << std::endl;
    scavtrap.displayStatus();
    std::cout << std::endl;

    return 0;
}

