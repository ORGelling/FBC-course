#include "strings.ih"

    // by 

Strings::~Strings()
{
    clearContents();
    
    operator delete(d_str);
}
