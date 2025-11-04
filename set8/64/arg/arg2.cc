#include "arg.ih"

    // by initialise2.cc

Arg::Arg
(
    char const *optstring,
    LongOption const *begin,
    LongOption const *end,
    int argc, char **argv
)
:
    d_optStructArray(static_cast<size_t>(end - begin + 1)),
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
    opterr = 0;     // Quiets getopt error messages
    int opt;
    int longIdx;
    while ((opt = getopt_long(argc, argv, 
                            optstr.c_str(), options, &longIdx)) != -1) 
    {
        switch (opt)
        {
            case '?':                       // Show erroneous option 
                unknownOpt(argv, argc);
            break;
            case ':':
                cerr << d_basename << ": option -" << char(optopt) 
                                            << " requires an argument\n";
            break;
            case 0:                         // exclusive long option
                if (argLongError(options, longIdx)) // check validity
                    break;
                d_longOption.add(options[longIdx].name);
            break;
            default:
                if (argError(opt))                  // check validity
                    break;
                d_option.add(opt);          // short option
                findLong(options, nLongOpts, opt);
            break;                          // search for long complement
        }
    }
    copyArgs(argv + optind, argv + argc);
}                   // Stores non option args in d_argv and counts d_nArgs
