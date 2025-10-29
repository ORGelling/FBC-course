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
    
    size_t nLongOpts = end - begin;
    d_optStructArray = new OptStructArray(nLongOpts + 1);
    
    struct option *options = d_optStructArray->get();
    
    buildLongOptArray(begin, end, options);
    
    d_longOption = new ArgLongOption();
    
    opterr = 0;
    int opt;
    int longIdx = -1;
    //int old_optind = optind;
    while ((opt = getopt_long(
                    argc, argv, optstr.c_str(), options, &longIdx)) != -1) 
    {
        switch (opt)
        {
            case '?':
            case ':':
            continue;
            case '0': 
                // Long option with no short equivalent
                d_longOption->add(options[longIdx].name);
                cerr << "no short for " << options[longIdx].name << '\n';
            break;
            default:
                d_option->add(opt);
                if (longIdx >= 0)
                    d_longOption->add(options[longIdx].name);
                //    cerr << "long with short added\n";
                //}
                // Short option or long option with short equivalent
        }
    }
    d_nArgs = argc - optind;
}
