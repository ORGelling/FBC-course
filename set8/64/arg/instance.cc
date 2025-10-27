#include "arg.ih"

    // by 

Arg &Arg::instance()
{
    return s_arg ? s_arg : (s_arg = new Arg);
}       // Needs work
