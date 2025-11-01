#include "arg.ih"

    // by 

Arg::Arg(char const *optstring, int argc, char **argv)
:
    d_option(),
    d_longOption(),
    d_optStructArray(0),
    d_basename(setBaseName(argv[0])),
    d_argc(argc),
    d_argv(argv)
{
    string optstr = makeOptStr(optstring);
                                // adds ":" to start of string
    //d_option = new ArgOption();
    opterr = 0;
    
    int opt;
    //int old_optind = optind;
    while ((opt = getopt(argc, argv, optstr.c_str())) != -1)
    {
        if (opt == '?' || opt == ':')
            continue;
        d_option.add(opt);
    }
    
    d_nArgs = argc - optind;
}
