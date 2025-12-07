#include "strings.ih"

    // by 

Strings::Strings(size_t argc, char **argv)
//try
:
    Strings()                       // object is considered constructed.
{
    d_capacity = argc;
    
    //throw bad_alloc{};              // simulating throw
    operator delete(d_str);         // ugly but for debugging fill
    d_str = rawPointers(argc);      // allocates new memory, can throw
    
    fill(argc, argv);               // write contents, increments d_str
}                                   // can throw too
