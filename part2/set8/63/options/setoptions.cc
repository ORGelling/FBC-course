#include "options.ih"

    // by 

void Options::setOptions()
{
    if (d_arg.option('h'))                  // not sure what to do with   
    {                                       // usage and exit/return value,
        usage();                            // Jurjen once recommended 
        exit(0);                            // return usage(1) from main    
    }                                       
                                            
    setSource();    
    
    setThreads();
    
    setOption(d_output, 'o');
    
    setOption(d_tmp, 't');
    
    //setOption(d_cflags, 'c');         // mutli arg inputs are a bit much
}                                       // to figure out how to use for now
