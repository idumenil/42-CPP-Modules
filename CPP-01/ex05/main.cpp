#include "Harl.hpp"

int main() {

    std::string input;
    Harl        harl;

    std::cout << std::endl << "Enter one of the following level: DEBUG | INFO | WARNING | ERROR " << std::endl;
    std::cout << "Or enter 'exit' to exit the program." << std::endl << std::endl;

    do
    {   
        std::cout << "Your level: ";
        std::cin >> input;
        std::cout << std::endl;
        harl.complain(input);
    } while (input.compare("exit"));

    return 0;
}
