#include "arg.ih"

    // by 

int Arg::setArgType(Arg::Type type)
{
    switch (type)
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
