#include "functions.ih"

RuleValue Functions::abs(ArgVec const &args) const
{
    argCount(args, 1);

    return RuleValue{ std::fabs(args[0]) };
}
