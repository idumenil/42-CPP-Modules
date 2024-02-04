#include "Harl.hpp"

int main( int argc, char **argv ) {

    if (argc != 2) {
        std::cout << "Usage: ./harlFilter \"level\"\n";
    }

    std::string input = argv[1];
    Harl        harl;

    harl.complain(input);

    return 0;
}
