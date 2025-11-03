#include "arg.ih"

    // by 

Arg &Arg::initialise(char const *optstring, int argc, char **argv)
{
    if (s_instance)
    {
        cerr << "initialise called repeatedly\n";
        exit(1);
    }
                                        // Static object initialised here
    static Arg instance(optstring, argc, argv);
    s_instance = &instance; //new Arg(optstring, argc, argv);
                                        // Pointer handed back for use
    return *s_instance;
}
