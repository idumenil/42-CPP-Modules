#pragma once

#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include <stack>

class RPN {

	private:
		std::stack<int>	_container;

	public:

        RPN();
		~RPN();
        RPN(const RPN & obj);
        RPN &operator=(const RPN & rhs);

		void	calculate(char *str);

};
