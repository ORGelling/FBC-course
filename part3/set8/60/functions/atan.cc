#include "functions.ih"

RuleValue Functions::atan(ArgVec const &args) const
{
    argCount(args, 1);
    
    double value = args[0];

    return RuleValue{ from_radians(std::atan(value)) };
}
