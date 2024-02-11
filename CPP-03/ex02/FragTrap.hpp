#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap( std::string name );
        ~FragTrap();
        FragTrap( FragTrap const & rhs );
        FragTrap & operator=( FragTrap const & rhs );

        void    highFive( void );

        void displayStatus( void );

};

#endif