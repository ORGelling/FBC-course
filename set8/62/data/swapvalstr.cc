#include "data.ih"

    // by 

void Data::swapValStr(Data &other)
{
    size_t temp = u_value;
    
    new(&u_word) string{ move(other.u_word) };
    other.u_word.string::~string();
    
    other.u_value = temp;
}
