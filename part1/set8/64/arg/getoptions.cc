#include "arg.ih"

    // by initialise2.cc

void Arg::getOptions
(
    int argc, 
    char **argv, 
    size_t nLongOpts,
    string optstr, 
    struct option *options
)
{
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
}
