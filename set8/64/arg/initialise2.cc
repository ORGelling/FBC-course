#include "arg.ih"

    // by 

Arg &Arg::initialise
(
    char const *optstring, 
    LongOption const *const begin, 
    LongOption const *const end,
    int argc, char **argv
)
{
    if (s_instance)
    {
        cerr << "initialise called repeatedly\n";
        exit(1);
    }
    
    s_instance = new Arg(optstring, begin, end, argc, argv);
    
    return s_instance;
}
