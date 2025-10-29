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
        options[index].name = begin[index].name().c_str();
        options[index].has_arg = setArgType(begin[index].type());
        options[index].flag = nullptr;
        options[index].val = begin[index].optionChar() ? 
                                            begin[index].optionChar() : 0;
    }
}
