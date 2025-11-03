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
    d_optStructArray(end - begin + 1),
    d_basename(setBaseName(argv[0])),
    d_argc(argc),
    d_argv(argv)
{
    string optstr = makeOptStr(optstring);
                            // adds : to start of option string to distinguish
                            // unknown options and missing option arguments
    size_t nLongOpts = end - begin;
                                    // Fetch pointer to d_oSA for local use
    struct option *options = d_optStructArray.get();
    buildLongOptArray(optstr, begin, end, options);
                            // Fill it with the callable options and rqrmnts
    opterr = 0;
    int opt;
    int longIdx = -1;
    while ((opt = getopt_long(
                    argc, argv, optstr.c_str(), options, &longIdx)) != -1) 
    {
        switch (opt)
        {
            case '?':               // still need to do something with 
            case ':':               // missing arguments I think
            continue;
            case 0:                         // exclusively long
                d_longOption.add(options[longIdx].name);
            break;
            default:
                d_option.add(opt);         // adding short
                // slower, but finds long directly, and when short used
                findLong(options, nLongOpts, opt);
            break;                          // long with short counterpart
        }
    }
    d_nArgs = argc - optind;        // getopt leaves arguments at end of list
}
