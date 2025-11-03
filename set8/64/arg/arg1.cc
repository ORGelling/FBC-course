#include "arg.ih"

    // by 

Arg::Arg(char const *optstring, int argc, char **argv)
:
    d_optStructArray(1),                // set 1 to avoid freeing invalid ptr
    d_basename(setBaseName(argv[0])),
    d_argc(argc),
    d_argv(argv)
{
    string optstr = makeOptStr(optstring);
                            // adds ":" to start of string to distinguish
                            // unknown options from missing option arguments
    opterr = 0;
    
    int opt;
    while ((opt = getopt(argc, argv, optstr.c_str())) != -1)
    {
        if (opt == '?' || opt == ':')   // unknown options
            continue;                   
        d_option.add(opt);              // storing info
    }
    
    d_nArgs = argc - optind;            // Arguments sorted at end
}
