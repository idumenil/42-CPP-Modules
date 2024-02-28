#include "Base.hpp"

Base* generate( void ) {
	int random = rand() % 3;

	switch (random) {
		case 0:
			std::cout << "Generated object: A" << std::endl;
			return new A;
		case 1:
			std::cout << "Generated object: B" << std::endl;
			return new B;
		case 2:
			std::cout << "Generated object: C" << std::endl;
			return new C;
		default:
			return NULL;
	}
}

void identify( Base* p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "Identified object: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified object: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified object: C" << std::endl;
	else
		std::cout << "Identified object: Unknown" << std::endl;
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "Identified object: A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "Identified object: B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "Identified object: C" << std::endl;
	else
	    std::cout << "Identified object: Unknown" << std::endl;
}

int main() {
	srand(static_cast<unsigned>(time(0)));

	for (int i = 0; i < 10; ++i) {
		std::cout << "*** TEST N°" << (i + 1) << " ***" << std::endl;

		Base* obj = generate();

		std::cout << "Identification with pointer: ";
		identify(obj);

		std::cout << "Identification with reference: ";
		identify(*obj);

		delete obj;
		std::cout << std::endl;
	}

	return 0;
}