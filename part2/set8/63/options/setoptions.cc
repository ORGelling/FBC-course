#include "options.ih"

    // by 

void Options::setOptions()
{
    setSource();    
    
    setThreads();
    
    setOption(d_output, 'o');
    
    setOption(d_tmp, 't');
    
    setOption(d_cflags, 'c');
}
