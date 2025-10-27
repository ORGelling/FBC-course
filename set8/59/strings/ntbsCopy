#include "strings.ih"

char *Strings::ntbsCopy(char const *ntbs)
{
    string tmp{ ntbs };                     // get the ntbs's details

    char *ret = new char[tmp.length() + 1]; // allocate memory (+ asciiZ)

    ret[tmp.copy(ret, string::npos)] = 0;   // initialize the memory 

    return ret;                             // return the copy
}
