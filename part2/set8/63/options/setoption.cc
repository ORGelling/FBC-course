#include "options.ih"

    // by 

void Options::setOption(string &member, char const ch)
{
    string opt;                         // need my default arguments to not
    if (d_arg.option(&opt, ch))         // not get overwritten by the Arg 
        member = move(opt);             // parser, which clears the string  
}                                       // if no args are present
