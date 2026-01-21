#include "options.ih"

    // by 

void Options::setThreads()
{
    string opt;
    size_t tempNr = 1;
    if (d_arg.option(&opt, 'j'))
        tempNr = stoul(opt);            // can throw! We take this as-is, 
                                        // should show the user what is wrong
    d_nThreads = tempNr ? tempNr : 1;
}
