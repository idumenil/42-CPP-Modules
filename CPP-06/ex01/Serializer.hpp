#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstddef>

struct Data
{
    std::string name;
    int         value;
};

typedef size_t uintptr_t;

class Serializer {

public:
	~Serializer();

	static uintptr_t serialize( Data* ptr );
	static Data* deserialize( uintptr_t raw );

private:
	Serializer();
	Serializer( const Serializer& other );

	Serializer& operator=( const Serializer& other );

};

#endif