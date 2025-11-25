#include "strings.ih"

    // by 

Strings::Strings(size_t argc, char **argv)
try
:
    Strings()                       // object is considered constructed.
{
    d_size = argc;                  // overwriting default ctor values
    d_capacity = argc;
    
    d_str = rawPointers(argc);      // THIS can throw
    //throw bad_alloc{};              // simulating throw
    
    fill(argv);                     // write contents (this can too)
}
catch (...)
{
    handleExceptions();
}
