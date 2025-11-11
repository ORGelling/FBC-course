#include "arg.ih"

// static
Arg &Arg::instance()
{
        // instead of just using s_arg the pointer is embedded in a
        // Deleter object. See arg.h

    if (not s_deleter.d_arg)        // instance requires an initialized object
    {
        cerr << "Arg::instance(): not yet initialized";
        exit(1);
    }

    return *s_deleter.d_arg;        // return its reference if available
}
