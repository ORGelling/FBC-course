#include "options.ih"

    // by 

void Options::setSource()                   // this is a bit lengthy but the 
{                                           // flag combinations require a 
    bool fileOpt = d_arg.option('f');       // decent bit of checking here.
    bool dirOpt = d_arg.option('d');        // Hence, lengthy function, but 
    bool recOpt = d_arg.option('r');        // I hope it warrants it
    
    if (fileOpt and (dirOpt or recOpt))     
    {                                       // Oopsie, user needs the manual
        usage();
        throw runtime_error{ "Conflicting source types specified" };
    }
    
    string opt;
    if (fileOpt and d_arg.option(&opt, 'f'))
    {
        d_mode = SourceMode::SOURCEFILE;
        d_source = opt;
    }
    else if (dirOpt and d_arg.option(&opt, 'd'))
    {
        d_mode = recOpt ? SourceMode::DIRECTORYR : SourceMode::DIRECTORY;
        d_source = opt;
    }
    else if(recOpt)
    {
        d_mode = SourceMode::DIRECTORYR;
        d_source = ".";
    }
    else
        d_mode = SourceMode::ARGS;      // If no source flag present we 
}                                       // either expect a redirected file, 
                                        // or look for cl argument names

                                // can make -d's argument optional and set
                                // it to "." if none provided? Optional args 
                                // don't parse that well though, as their arg 
                                // only gets noticed if it is directly 
                                // attached to the flag like -d[dirname]
