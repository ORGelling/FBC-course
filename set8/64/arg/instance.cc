#include "arg.ih"

    // by 

Arg &Arg::instance()
{
    if (!s_instance)
    {
        cerr << "Not initialised.\n";
        exit(1);
    }
                                            // Return arg object stored   
    return *s_instance;                     // inside initialise1/2.cc
}
