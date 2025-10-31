#include "arg.ih"

    // by 

Arg &Arg::instance()
{
    if (!s_instance)
    {
        cerr << "Not initialised.\n";
        exit(1);
    }
    
    return *s_instance;
}
