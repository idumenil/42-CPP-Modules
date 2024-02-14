#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {

public:
    AAnimal( void );
    AAnimal( std::string type );
    virtual ~AAnimal( void );

    AAnimal( const AAnimal& src );
    AAnimal& operator=( const AAnimal& rhs );

    virtual void    makeSound( void ) const = 0;
    std::string     getType( void ) const;

protected:
    std::string _type;

};

#endif