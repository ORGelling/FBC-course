#include "data.ih"

    // by 

void Data::swapStrDoub(Data &other)
{
    string temp{ u_word };
    u_word.string::~string();
    
    u_double = other.u_double;
    
    new(&other.u_word) string{ move(temp) };
}
