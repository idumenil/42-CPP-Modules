#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:
    Cat( void );
    ~Cat( void );
    Cat( const Cat& src );
    Cat& operator=( const Cat& src );

    void   makeSound( void ) const;

private:
    Brain   *_brain;

};

#endif