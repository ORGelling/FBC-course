#include "data.ih"

    // by 

void Data::swap2String(Data &other)
{
    string temp{ other.u_word };
    other.u_word.string::~string();
    
    new(&other.u_word) string{ move(u_word) };
    u_word.string::~string();
    
    new(&u_word) string{ move(temp) };
}
