#include "options.ih"

    // by 

void Options::setThreads()
{
    string opt;
    size_t tempNr = 1;
    if (d_arg.option(&opt, 'j'))
    {
        tempNr = stoul(opt);                    // can throw! We accept this 
        d_nThreads = tempNr ? tempNr : 1;
    }
}
