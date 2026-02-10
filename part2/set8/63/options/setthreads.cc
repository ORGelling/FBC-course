#include "options.ih"

    // by 

void Options::setThreads()
try
{
    string opt;
    size_t tempNr = 1;
    if (d_arg.option(&opt, 'j'))
    {                                   // user is not allowed to set 0 cores
        tempNr = stoul(opt);                    // that would be dumb
        d_nThreads = tempNr ? tempNr : 1;
    }
}
catch (exception const &ext)
{
    throw runtime_error{ "Options: Error converting input with stoul" };
}                                   // bit excessive maybe, but much clearer
