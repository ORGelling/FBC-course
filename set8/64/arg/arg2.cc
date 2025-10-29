#include "arg.ih"

    // by 

Arg::Arg
(
    char const *optstring,
    LongOption const *begin,
    LongOption const *end,
    int argc, char **argv
)
:
    d_basename(setBaseName(argv[0])),
    d_argc(argc),
    d_argv(argv)
{
    string optstr = makeOptStr(optstring);
                                // to hijack getopt's error handling (?)
    d_option = new ArgOption();
    d_longOption = new ArgLongOption();
    
    size_t nLongOpts = end - begin;
    d_optStructArray = new OptStructArray(nLongOpts + 1);
    
    struct option *options = d_optStructArray->get();
    buildLongOptArray(begin, end, options);
    
    opterr = 0;
    int opt;
    int longIdx = -1;
    while ((opt = getopt_long(
                    argc, argv, optstr.c_str(), options, &longIdx)) != -1) 
    {
        switch (opt)
        {
            case '?':
            case ':':
            continue;
            case 0: 
                d_longOption->add(options[longIdx].name);
            break;
            default:
                d_option->add(opt);
                if (longIdx != -1 && options[longIdx].val)      // this is 
                    d_longOption->add(options[longIdx].name);   // broken
            break;
        }
    }
    d_nArgs = argc - optind;
}
