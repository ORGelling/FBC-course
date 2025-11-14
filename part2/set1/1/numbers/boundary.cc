#include "numbers.ih"

    // by 

void Numbers::boundary(size_t index) const
{
    if (index < d_size and index >= 0)
        return;
    
    cerr << "index out of bounds\n";
    exit(1);                                // throw is still NC for now
}
