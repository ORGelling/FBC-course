#include "sum.ih"

bool findDouble(size_t const argc, char const *argv[])
{
    for (size_t argIdx = 1; argIdx != argc; ++argIdx) 
    {
        string const argument = argv[argIdx];                                 
        if (argument.find(".") != string::npos)                               
            return true;                        // One double is enough
    }
    return false;
}
