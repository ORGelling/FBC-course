#include "arg.ih"

    // by 

Arg::Arg(char const *optstring, int argc, char **argv)
:
    d_argc(argc),
    d_argv(argv),
    d_basename(setBaseName(argv[0]))
{
    string optstr = makeOptStr(optstring);
                                // to hijack getopt's error handling (?)
    d_option = new ArgOption();
    opterr = 0;
    
    int opt;
    //int old_optind = optind;
    while ((opt = getopt(argc, argv, optstr.c_str())) != -1)
    {
        if (opt == '?' || opt == ':')
            continue;
        d_option->add(opt);     // use ArgOption's add function
    }
    
    d_nArgs = argc - optind;
}
