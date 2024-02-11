#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

    DiamondTrap diamondtrap("Diamy");

    std::cout << std::endl;
    diamondtrap.displayStatus();
    std::cout << std::endl;

    diamondtrap.attack("Bob");
    diamondtrap.beRepaired(1);
    diamondtrap.takeDamage(1);
    diamondtrap.whoAmI();

    std::cout << std::endl;
    diamondtrap.displayStatus();
    std::cout << std::endl;

    return 0;
}
