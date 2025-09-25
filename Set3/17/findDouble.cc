#include "sum.ih"

bool findDouble(size_t const argc, char const *argv[])
{
    bool foundDouble = false; 
    for (size_t argIdx = 1; argIdx != argc; ++argIdx) 
    {
        string const argument = argv[argIdx];                                 
        if (argument.find(".") != string::npos)                               
        { 
            foundDouble = true; 
            break;                              // One double is enough
        }       
    }
    return foundDouble;
}
