#include "RPN.hpp"

int	main(int argc, char **argv) {

	RPN	expr;

	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments.\n";
		return 1;
	}
    
	expr.calculate(argv[1]);

    return 0;

}