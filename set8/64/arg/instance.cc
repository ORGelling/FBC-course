#include "arg.ih"

    // by 

Arg &Arg::instance()
{
    return s_instance ? s_instance : nullptr;
}       // Needs work
