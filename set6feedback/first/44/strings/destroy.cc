#include "strings.ih"

    // by strings5.cc

void Strings::destroy()
{
    for (size_t index = 0; index != d_size; ++index)
        delete d_data[index];
    
    operator delete(d_data);
}
//JB: I disagree with allocating and deleting raw memory for pointers.
//JB: new[] does it perfectly well, and returns the proper type without a cast,
//JB: even if the constructor is a no-op.
