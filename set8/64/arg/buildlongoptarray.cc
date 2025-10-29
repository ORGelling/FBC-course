#include "arg.ih"

    // by 

void Arg::buildLongOptArray
(
    LongOption const *begin, 
    LongOption const *end, 
    struct option *options
)
{
    size_t nLongOpts = end - begin;
    for (size_t index = 0; index != nLongOpts; ++index)
    {
        options[index].name = const_cast<char *>(begin[index].name().c_str());
        options[index].has_arg = 
                            (begin[index].type() == Arg::Required) ? 
                            required_argument : 
                                (begin[index].type() == Arg::Optional) ? 
                                optional_argument : no_argument;
        options[index].flag = nullptr;
        options[index].val = begin[index].optionChar() ? 
            begin[index].optionChar() : 0;
    }
}
