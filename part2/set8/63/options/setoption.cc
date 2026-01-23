#include "options.ih"

    // by 

void Options::setOption(string &member, char const ch)
{
    string opt;                     // need my default arguments to not
    if (d_arg.option(&opt, ch))     // get overwritten by the Arg parser.
        member = move(opt);         // It clears the string if no arg present
}
