#include "options.ih"

    // by 

    // longOptions and optstring found in ctor

void Options::initialise(int argc, char **argv)
{
    if (s_instance)
        throw runtime_error{ "Initialise called repeatedly\n" };
    
    static Options instance(argc, argv);
    s_instance = &instance;
}                                   // we don't return from here!
                                    // Options can be reached through 
                                    // Options::instance()
