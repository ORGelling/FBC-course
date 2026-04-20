#include "functions.ih"

RuleValue Functions::cos(ArgVec const &args) const
{    
    argCount(args, 1);

    return RuleValue{ std::cos(to_radians(args[0])) };
}
