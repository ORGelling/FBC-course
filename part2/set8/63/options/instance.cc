#include "options.ih"

    // by 

Options &Options::instance()  
{                                
    if (!s_instance)                        
        throw runtime_error{ "Options: instance called uninitialised" };
        
    return *s_instance;                         // we mimic almost exactly 
}                                               // what we did with Arg
