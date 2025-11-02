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
    d_option(),
    d_longOption(),
    d_optStructArray(end - begin + 1),
    d_basename(setBaseName(argv[0])),
    d_argc(argc),
    d_argv(argv)
{
    string optstr = makeOptStr(optstring);
                                // adds : to start of option string
    // add dual opts to string? Such that optstring is only for short options
    // and dual option arg requirement setting?
    
    //d_option = new ArgOption();
    //d_longOption = new ArgLongOption();
    
    size_t nLongOpts = end - begin;
    //d_optStructArray = new OptStructArray(nLongOpts + 1);
                                        // we build the struct and make a
                                        // pointer to it for ease of use
    struct option *options = d_optStructArray.get();
    buildLongOptArray(optstr, begin, end, options);
    
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
            case 0:                         // exclusively long
                d_longOption.add(options[longIdx].name);
            break;
            default:
                d_option.add(opt);         // adding short
                // slower, but finds long directly, and when short used
                findLong(options, nLongOpts, opt);
                //if (longIdx != -1 && options[longIdx].val == opt)
                //    d_longOption->add(options[longIdx].name);
            break;                          // long with short counterpart
        }
    }
    d_nArgs = argc - optind;
}
