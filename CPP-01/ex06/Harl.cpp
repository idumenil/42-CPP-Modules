#include "Harl.hpp"

Harl::Harl( void ) {
    return;
}

Harl::~Harl( void ) {
    return;
}

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain( std::string level ) {
    void (Harl::*complaints[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int levelIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			levelIndex = i;
			break ;
		}
	}

    switch (levelIndex)
    {
    case    0: 
        (this->*complaints[0])();
        //fallthrough
    case    1: 
        (this->*complaints[1])();
        //fallthrough
    case    2: 
        (this->*complaints[2])();
        //fallthrough
    case    3: 
        (this->*complaints[3])();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}