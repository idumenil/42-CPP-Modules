#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:
    Dog( void );
    ~Dog( void );
    Dog( const Dog& src );
    Dog& operator=( const Dog& src );

    void   makeSound( void ) const;

private:
    Brain   *_brain;

};

#endif