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
    d_basename(setBaseName(argv[0]))
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
    int longIdx = -1;
    while (true) 
    {
        switch (int opt = getopt_long(argc, argv, optstr.c_str(), 
                                                        options, &longIdx))
        {
            case -1:
                copyArgs(argv + optind, argv + argc);
            return;
            case '?': 
                cerr << "unknown option -" << char(optopt) << '\n';
            break;
            case ':':
                cerr << "option -" << char(optopt) 
                                        << " requires an argument\n";
            break;
            case 0:                         // exclusively long
                if (argLongError(options, longIdx)) // check validity
                    break;
                d_longOption.add(options[longIdx].name);
            break;
            default:
                if (argError(opt))                  // check validity
                    break;
                d_option.add(opt);              // adding short
                findLong(options, nLongOpts, opt);
            break;                          // search for long counterpart
        }
    }
    d_nArgs = argc - optind;        // getopt leaves arguments at end of list
}
