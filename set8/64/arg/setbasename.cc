#include "arg.ih"

    // by 

string Arg::setBaseName(char *argv0) const
{
    // set basename using a copy of argv[0]
    char progName[strlen(argv0) + 1];
    strcpy(progName, argv0);
    return string(basename(progName));
}
