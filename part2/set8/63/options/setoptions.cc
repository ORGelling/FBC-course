#include "options.ih"

    // by 

void Options::setOptions()
{
    if (d_arg.option('h'))
    {
        usage();                        // not sure what to do with usage
        exit(0);                        // and exit/return value
    }
    
    setSource();    
    
    setThreads();
    
    setOption(d_output, 'o');
    
    setOption(d_tmp, 't');
    
    //setOption(d_cflags, 'c');         // mutli arg inputs are a bit much
}                                       // to figure out how to use for now
