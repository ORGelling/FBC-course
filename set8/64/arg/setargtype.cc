#include "arg.ih"

    // by 

int Arg::setArgType(Arg::LongOption thisOption, string const &optstr)
{
    size_t optStrIndex = optstr.find_first_of(thisOption.optionChar());
    
    if (optStrIndex != string::npos) 
        return (optstr[optStrIndex + 1] != ':' ? None :
            (optstr[optStrIndex + 2] != ':' ? Required 
                : Optional));
    
    return thisOption.type();
}
