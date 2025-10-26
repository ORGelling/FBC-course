#include "data.ih"

    // by 

void Data::swapDoubStr(Data &other)
{
    string temp{ other.u_word };
    other.u_word.string::~string();
    
    other.u_double = u_double;
    
    new(&u_word) string{ move(temp) };
}
