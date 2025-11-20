#include "numbers.ih"

    // by 

namespace { // HB: L
    int dummy;
}

int &Numbers::at(size_t index)
{
    if (index <= d_size)
        return d_data[index];
    
    cerr << "out of range\n";
    return dummy = dummy;
}
