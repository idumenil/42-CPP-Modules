#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public:
    Animal( void );
    Animal( std::string type );

    virtual ~Animal( void );

    Animal( const Animal& src );
    Animal& operator=( const Animal& rhs );

    virtual void    makeSound( void ) const;
    std::string     getType( void ) const;

protected:
    std::string _type;
    
};

#endif