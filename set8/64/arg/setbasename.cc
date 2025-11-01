#include "arg.ih"

    // by 

string Arg::setBaseName(char *argv0)
{
    if (not argv0)
        return string();
    
    string temp(argv0);
    char progName[strlen(argv0) + 1];
    
    progName[ temp.copy(progName, string::npos) ] = 0;
    
    return string(basename(progName));
}
