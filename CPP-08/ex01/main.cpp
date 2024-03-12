#include "Span.hpp"

int main()
{
    std::cout << "*** TEST SUJET ***" << std::endl;

    Span sp = Span( 5 );

    sp.addNumber( 6 );
    sp.addNumber( 3 );
    sp.addNumber( 9 );
    sp.addNumber( 17 );
    sp.addNumber( 11 );

    std::cout << "sp: " << sp << std::endl;

    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;

    std::cout << std::endl << "*** TEST ADDITIONNEL ***" << std::endl;

    try {
        std::list<int>    lst( 10000 );
        std::srand( time ( NULL ) );
        std::generate( lst.begin(), lst.end(), std::rand );

        Span span( lst.size() );

        span.addNumber( lst.begin(), lst.end() );

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}