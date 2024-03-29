#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc <= 1) {
        std::cerr << "Error: No input sequence provided." << std::endl;
        return 1;
    }
    
	PmergeMe pmergeMe(argc, argv);
	(void)pmergeMe;

    return 0;
}
