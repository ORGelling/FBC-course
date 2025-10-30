#include "arg.ih"

    // by 

int Arg::setArgType(Arg::LongOption thisOption, string const &optstr)
{
    // check if dual
    size_t optStrIndex = optstr.find_first_of(thisOption.optionChar());
    
    if (optStrIndex != string::npos && optstr[optStrIndex + 1] == ':')
       return required_argument;
    
    // This can use some work, but it's an improvement
    
    switch (thisOption.type())
    {
        case Arg::Required:
            return required_argument;
        break;
        case Arg::Optional:
            return optional_argument;
        break;
        case Arg::None:
        default:
            return no_argument;
    }
}
