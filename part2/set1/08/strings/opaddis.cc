#include "strings.ih"

Strings &Strings::operator+=(string const &next)
{
    cow();                              // When used to add strings 
                                        // to existing Strings objects
    
    string *tmp = enlarge();            // make room for the next string,
                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    delete[] d_str;                     // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
    
    return *this;
}
