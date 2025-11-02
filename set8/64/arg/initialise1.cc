#include "arg.ih"

    // by 

Arg &Arg::initialise(char const *optstring, int argc, char **argv)
{
    if (s_instance)
    {
        cerr << "initialise called repeatedly\n";
        exit(1);
    }
    
    static Arg instance(optstring, argc, argv);
    s_instance = &instance; //new Arg(optstring, argc, argv);
    
    return *s_instance;
}
