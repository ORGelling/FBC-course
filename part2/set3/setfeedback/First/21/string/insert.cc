#include "string.ih"

    // by 

String &String::insert(string const &txt)
{
    string::insert(0, txt);
    return *this;
}
