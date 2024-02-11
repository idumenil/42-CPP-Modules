#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap( std::string name );
        ~ClapTrap( void );
        ClapTrap( ClapTrap const & rhs );
        ClapTrap & operator=(ClapTrap const & rhs);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void displayStatus( void );

    protected:
        std::string _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
};

#endif