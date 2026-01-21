#include "options.ih"

    // by 

void Options::setOption(string &member, char const ch)
{
    string opt;
    if (d_arg.option(&opt, ch))
        member = move(opt);
}
