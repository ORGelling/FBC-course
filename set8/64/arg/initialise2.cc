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
                            // Storing function local static here   
    static Arg instance(optstring, begin, end, argc, argv);
    s_instance = &instance; //new Arg(optstring, begin, end, argc, argv);
                            // Pointer to it handed back
    return *s_instance;
}
