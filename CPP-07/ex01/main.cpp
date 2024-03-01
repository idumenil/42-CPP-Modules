#include "iter.hpp"

int	main() {
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	double		arrayDouble[3] = {3.14e9, 42.1e21, 6.77e10};
	char		arrayChar[5] = {'h', 'e', 'l', 'l', 'o'};
	const char	*arrayConstChar[3] = {"bleu", "blanc", "rouge"};
	std::string	arrayStr[4] = {"montagne", "riviere", "foret", "ocean"};
	
	iter<int>(arrayInt, 5, printData);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, printData);
	std::cout << std::endl;

	iter<double>(arrayDouble, 3, printData);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, printData);
	std::cout << std::endl;

	iter<const char *>(arrayConstChar, 3, printData);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 4, printData);
	std::cout << std::endl;

	return 0;
}