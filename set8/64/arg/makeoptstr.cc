#include "arg.ih"

    // by 

string Arg::makeOptStr(char const *optstring)
{
    string optstr = (optstring[0] == ':') ?      
                optstring : std::string(":") + optstring;
    return optstr;
}
