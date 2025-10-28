#include "arg.ih"

    // by 

Arg &Arg::initialise(char const *optstring, int argc, char **argv)
{
    if (s_instance)
    {
        cerr << "initialise called repeatedly\n";
        exit(1);
    }
    
    s_instance = new Arg(optstring, argc, argv);
    //s_initialised = true;
    
    return *s_instance;
}
