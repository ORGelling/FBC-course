#include "data.ih"

    // by 

Data::Data(Data const &tmp, Type type)
{
    (this->*s_copy[type])(tmp);
}
