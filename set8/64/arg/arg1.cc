#include "arg.ih"

    // by 

Arg::Arg(char const *optstring, int argc, char **argv)
:
    d_optStructArray(1),                // set 1 to avoid freeing invalid ptr
    d_basename(setBaseName(argv[0]))
{
    string optstr = makeOptStr(optstring);
                            // adds ":" to start of string to distinguish
                            // unknown options from missing option arguments
    opterr = 0;
    
    while (true)
    {
        switch (int opt = getopt(argc, argv, optstr.c_str()))
        {
            case -1:
                copyArgs(argv + optind, argv + argc);
            return;
            case '?':
                cerr << "unknown option -" << optopt << '\n';
            break;
            case ':':   // unknown options
                cerr << "option -" << optopt << " requires an argument\n";
            break;                   
            default:
                d_option.add(opt);              // storing info
        }
    }
    d_nArgs = argc - optind;            // Arguments sorted at end
}
