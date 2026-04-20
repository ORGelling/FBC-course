#include "functions.ih"

void Functions::argCount(ArgVec const &args, size_t size) const
{
    if (args.size() != size)
    {
        throw runtime_error{ "incorrect nr of arguments: expected " +
        to_string(size) + " got " + to_string(args.size()) };
    }
}
