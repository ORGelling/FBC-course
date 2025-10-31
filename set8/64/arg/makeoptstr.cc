#include "arg.ih"

    // by 

string Arg::makeOptStr(char const *optstring)
{
    string optstr = (optstring[0] == ':') ?      
                optstring : string(":") + optstring;
    return optstr;
}
