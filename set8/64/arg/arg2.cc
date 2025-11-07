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
    opterr = 0;     // Quiets getopt error messages
    
    string optstr = makeOptStr(optstring);
                            // adds : to start of option string to distinguish
                            // unknown options and missing option arguments
    struct option *options = d_optStructArray.get();
                                // Fetch pointer to d_oSA for local use
    buildLongOptArray(optstr, begin, end, options);
                            // Fill d_oSA with program options and rqrmnts
    size_t nLongOpts = end - begin;
    getOptions(argc, argv, nLongOpts, optstr, options);
                                        // uses getopt_long() to find and  
                                        // process all called options
    copyArgs(argv + optind, argv + argc);
}                   // Stores non option args in d_argv and counts d_nArgs
