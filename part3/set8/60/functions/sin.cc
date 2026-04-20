#include "functions.ih"

RuleValue Functions::sin(ArgVec const &args) const
{
    argCount(args, 1);

    return RuleValue{ std::sin(to_radians(args[0])) };
}
