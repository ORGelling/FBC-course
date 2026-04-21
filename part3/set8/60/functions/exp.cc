#include "functions.ih"

RuleValue Functions::exp(ArgVec const &args) const
{
    argCount(args, 1);

    return RuleValue{ std::exp(args[0]) };
}
