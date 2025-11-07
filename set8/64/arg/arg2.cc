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

    string optstr = makeOptStr(optstring); // adds ':' to start of optstring 
                                           // to distinguish unknown options 
                                           // and missing option arguments
    
    struct option *options = d_optStructArray.get();
    buildLongOptArray(optstr, begin, end, options);
                                // Fetch pointer to d_oSA for local use and
                                // fill it with program options and rqrmnts
    
    getOptions(argc, argv, end - begin, optstr, options);
                                        // uses getopt_long() to find and  
                                        // process all called options
    
    copyArgs(argv + optind, argv + argc);
}                   // Stores non option args in d_argv and counts d_nArgs
