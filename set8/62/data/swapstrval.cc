#include "data.ih"

    // by 

void Data::swapStrVal(Data &other)
{
    size_t value = other.u_value;
    
    new(&other.u_word) string{ move(u_word) };
    u_word.string::~string();
    
    u_value = value;
}
