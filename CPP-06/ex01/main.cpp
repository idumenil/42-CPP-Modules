#include "Serializer.hpp"


int main( void )
{
    Data *data = new Data;

    data->name = "Ticket";
    data->value = 42;

    std::cout << "Name: " << Serializer::deserialize( Serializer::serialize( data ) )->name << std::endl;
    std::cout << "Value: " << Serializer::deserialize( Serializer::serialize( data ) )->value << std::endl;

    delete data;

    return 0;
}