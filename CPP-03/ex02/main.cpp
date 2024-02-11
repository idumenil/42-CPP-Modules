#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    FragTrap fragtrap("Fragy");

    std::cout << std::endl;
    fragtrap.displayStatus();
    std::cout << std::endl;

    fragtrap.attack("Bob");
    fragtrap.beRepaired(1);
    fragtrap.takeDamage(1);
    fragtrap.beRepaired(1);
    fragtrap.highFive();

    std::cout << std::endl;
    fragtrap.displayStatus();
    std::cout << std::endl;

    return 0;
}

