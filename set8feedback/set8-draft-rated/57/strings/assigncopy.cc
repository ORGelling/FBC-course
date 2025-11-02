#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    Strings temp(other); // HB: BS -> `tmp` is prefered as a name
    //swap(temp);
    return *this = move(temp);
    // HB: this works fine, but prefer the line above you commented out
    // HB: although you basically do the same thing, 
    // HB: you have an extra function call
}
