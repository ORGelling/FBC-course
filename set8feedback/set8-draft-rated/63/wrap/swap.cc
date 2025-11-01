#include "wrap.ih"

    // by 

void Wrap::swap(Wrap &other)
{
    d_data.swap(d_type, other.d_data, other.d_type);
    
    Type tempType = d_type;
    d_type = other.d_type;
    other.d_type = tempType;
}
