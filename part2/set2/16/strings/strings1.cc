#include "strings.ih"

    // by 

Strings::Strings()
:                               // others are defult initialised
    d_str(rawPointers(1))
{
    cout << "default constructor\n";
}
