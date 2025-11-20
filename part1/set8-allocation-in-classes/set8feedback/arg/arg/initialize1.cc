#include "arg.ih"

// static
Arg &Arg::initialize(char const *optstring, int argc, char **argv)
{
        // instead of just using s_arg the pointer is embedded in a
        // Deleter object. See arg.h

    if (s_deleter.d_arg)                     // only 1 Arg object is allowed
    {
        cerr << "Arg::initialize(): already initialized\n";
        exit(1);
    }
                                        
    s_deleter.d_arg = new Arg(optstring, argc, argv); // construct the object

    return *s_deleter.d_arg;                          // return its reference.
}
