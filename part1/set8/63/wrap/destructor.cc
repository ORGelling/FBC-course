#include "wrap.ih"

    // by 

Wrap::~Wrap()
{
    d_data.destroy(d_type);
}
