#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <stdexcept>
#include <limits>
#include <algorithm>

class Span {

public:
    Span( unsigned int );
    Span( const Span& );
    ~Span( void );

    Span&               operator=( const Span& src);
    void                addNumber( int n);
    void                addNumber( std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd);
    unsigned int        longestSpan( void ) const;
    unsigned int        shortestSpan( void ) const;

    const std::list< int >*   getList( void ) const;

private:
    std::list<int>  _list;
    unsigned int    _N;

    Span( void );
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif