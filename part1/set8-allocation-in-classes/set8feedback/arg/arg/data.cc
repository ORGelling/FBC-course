#include "arg.ih"

    // leaks:
//Arg     *Arg::s_arg;

    // instead:
Arg::Deleter Arg::s_deleter;
