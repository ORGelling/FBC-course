#include "arg.ih"

    // by initialise1.cc

Arg::Arg(char const *optstring, int argc, char **argv)
:
    d_optStructArray(1),                // set 1 to avoid freeing invalid ptr
    d_basename(setBaseName(argv[0]))
{
    string optstr = makeOptStr(optstring);
                            // adds ":" to start of string to distinguish
                            // unknown options from missing option arguments
    opterr = 0;
    int opt;
    while ((opt = getopt(argc, argv, optstr.c_str())) != -1)
    {
        switch (opt)
        {
            case '?':
                cerr << "unknown option -" << char(optopt) << '\n';
            break;
            case ':':   // unknown options
                cerr << "option -" << char(optopt) 
                                                << " requires an argument\n";
            break;                   
            default:
                d_option.add(opt);              // storing info
        }
    }                   
    copyArgs(argv + optind, argv + argc);   
}                   // Stores non option args in d_argv and counts d_nArgs
