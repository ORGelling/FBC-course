#include "arg.ih"

    // by 

Arg &Arg::initialise(char const *optstring, int argc, char **argv)
{
    // This needs fixing
    if (s_instance)
    {
        cerr << "initialise called repeatedly\n";
        exit(1);
    }
    
    s_instance = new Arg(optstring, argc, argv);
    
    return s_instance;
}
