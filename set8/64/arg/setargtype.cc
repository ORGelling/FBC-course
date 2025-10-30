#include "arg.ih"

    // by 

int Arg::setArgType(Arg::LongOption thisOption, string const &optstr)
{
    // check if dual
    size_t optStrIndex = optstr.find_first_of(thisOption.optionChar());
    
    if (optStrIndex != string::npos) 
        return (optstr[optStrIndex + 1] == ':' ? 
            (optstr[optStrIndex + 2] == ':' ? optional_argument 
                : required_argument) : no_argument);
    
    // This can use some work, but it's an improvement
    
    return thisOption.type();
}
