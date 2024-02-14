#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

public:
    Brain( void );
    ~Brain( void );
    Brain( const Brain& src );
    Brain& operator=( const Brain& rhs );

private:
    std::string _ideas[100];

};
 
#endif