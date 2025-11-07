#include "arg.ih"

    // by 

string Arg::setBaseName(char *argv0)
{
    if (not argv0)
        return string();
    
    string temp(argv0);
    char progName[strlen(argv0) + 1];       // for processing program name
                                            
    progName[ temp.copy(progName, string::npos) ] = 0;
            // writing to progName              // setting null term byte
    return string(basename(progName));  // using basename(3) to get prog name
}
