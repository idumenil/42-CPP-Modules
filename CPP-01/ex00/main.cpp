#include "Zombie.hpp"

int main() {

    std::string name;
    
    std::cout << "Creating zombie on the stack" << std::endl;
    std::cout << "Give a name to the zombie: ";
    std::cin >> name;

    Zombie zombie1(name);

    std::cout << "Creating zombie on the heap" << std::endl;
    std::cout << "Give a name to the zombie: ";
    std::cin >> name;

    Zombie *zombie2 = newZombie(name);
    zombie2->announce();
    delete zombie2;

    std::cout << "Calling RandomChump" << std::endl;
    randomChump("Random");
    return 0;

}