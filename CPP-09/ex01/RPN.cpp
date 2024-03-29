#include "RPN.hpp"

RPN::RPN() {}

RPN	&RPN::operator=(const RPN & obj) {
	if (this != & obj)
		_container = obj._container;
	return (*this);
}

RPN::RPN(const RPN & rhs) {
	*this = rhs;
}

RPN::~RPN() {}

void RPN::calculate(char *str)
{
	int	i = 0;
	int	nb;
	int	temp_a;
	int temp_b;

	while (i < (int)strlen(str))
	{
		if (str[i] == ' ')
			i++;
		if (isdigit(str[i]))
		{
			nb = str[i] - '0';
			_container.push(nb);
		}
		else if (str[i] == '+' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b + temp_a);
		}
		else if (str[i] == '-' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b - temp_a);
		}
		else if (str[i] == '/' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b / temp_a);
		}
		else if (str[i] == '*' && _container.size() >= 2)
		{
			temp_a = _container.top();
			_container.pop();
			temp_b = _container.top();
			_container.pop();
			_container.push(temp_b * temp_a);
		}
		else
		{
			std::cout << "Error\n";
			return ;
		}
        i++;
	}
	if (_container.size() == 1)
	{
		temp_a = _container.top();
		_container.pop();
		std::cout << temp_a << std::endl;
	}
	else
		std::cout << "Invalid input." << std::endl;
}



