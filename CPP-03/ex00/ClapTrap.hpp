#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap( std::string name ); //default constructor
        ~ClapTrap(); //default destructor
        ClapTrap( ClapTrap const & rhs ); //copy constructor
        ClapTrap & operator=(ClapTrap const & rhs); //assignation operator

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void displayStatus( void );

    private:
        std::string _name;
        unsigned int    _hitPoints; //health of the ClapTrap
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
};

#endif