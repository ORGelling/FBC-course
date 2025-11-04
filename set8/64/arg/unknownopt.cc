#include "arg.ih"

    // by 

void Arg::unknownOpt(char const *const *argv, int argc) const
{
    cerr << d_basename << ": unknown option ";
    if (optopt)
        cerr << '-' << static_cast<char>(optopt) << '\n';
    else if (optind > 0 and optind <= argc and argv[optind - 1])
        cerr << argv[optind - 1] << '\n';
    else 
        cerr << "token unavailable\n";
}                                   // show erroneous token if posisble
