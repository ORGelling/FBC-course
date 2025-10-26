#include "data.ih"

    // by 

void Data::destroy(Type type)
{
    (this->*s_destroy[type])();
}
