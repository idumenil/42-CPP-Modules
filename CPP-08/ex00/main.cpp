#include "easyfind.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >      vect( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list< int >        list( arr, arr + sizeof( arr ) / sizeof( int ) );

    std::cout << "  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  " << std::endl << std::endl;
    
    std::cout << "*** Easyfind applied on a vector ***" << std::endl;
    std::cout << "5 : " ; easyfind( vect, 5);
    std::cout << "42 : "; easyfind( vect, 42);

    std::cout << "*** Easyfind applied on a list ***" << std::endl;
    std::cout << "5 : " ; easyfind( list, 5);
    std::cout << "42 : "; easyfind( list, 42);

    return 0;
}