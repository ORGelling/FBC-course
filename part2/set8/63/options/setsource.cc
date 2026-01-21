#include "options.ih"

    // by 

void Options::setSource()
{
    bool fileOpt = d_arg.option('f');
    bool dirOpt = d_arg.option('d');
    bool recOpt = d_arg.option('r');
    
    if (fileOpt and (dirOpt or recOpt))
        throw runtime_error{ "Conflicting source types specified\n" };
    
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
    // else cl args as file names, to be parsed in jobs().
}
