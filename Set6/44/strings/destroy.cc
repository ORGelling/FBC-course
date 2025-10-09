#include "strings.ih"

    // by

void Strings::destroy()
{
    for (string *sp = d_memory + d_size; sp-- != d_memory; )
        sp->~string();
    
    operator delete(d_memory);
}
