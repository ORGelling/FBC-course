#include "arg.ih"

    // by 

Arg::LongOption::LongOption(char const *name, int optionChar)
:
    d_name(name),
    d_type(None),
    d_optionChar(optionChar)
{}                      // LongOption row element construction for long opt
