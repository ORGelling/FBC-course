#include "shrink.ih"

    // by 

void Shrink::reset()
{
    d_vect = vector<string>();
    fill_n(back_inserter(d_vect), d_size, d_str);
    d_out << "starting. capacity = " << d_vect.capacity() << '\n';
}
