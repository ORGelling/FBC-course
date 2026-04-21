#include "functions.ih"

RuleValue Functions::tan(ArgVec const &args) const
{    
    argCount(args, 1);

    return RuleValue{ std::tan(to_radians(args[0])) };
}
