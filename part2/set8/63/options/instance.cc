#include "options.ih"

    // by 

Options &Options::instance()  
{                                
    if (!s_instance)                        
        throw runtime_error{ "Options instance called uninitialised\n" };
        
    return *s_instance;
}
