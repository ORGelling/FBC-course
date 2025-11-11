#include "arg.ih"

    // by 

int Arg::setArgType(Arg::LongOption thisOption, string const &optstr)
{                               // if there find dual opt in optstring
    size_t optStrIndex = optstr.find_first_of(thisOption.optionChar());
    
    if (optStrIndex != string::npos)        // retrieve arg reqrmnt
        return (optstr[optStrIndex + 1] != ':' ? None :
            (optstr[optStrIndex + 2] != ':' ? Required 
                : Optional));               // from :/:: in optstring
    
    return thisOption.type();
}
