#include "functions.ih"

RuleValue Functions::acos(ArgVec const &args) const
{
    argCount(args, 1);
    
    double value = args[0];

    if (value < -1.0 || value > 1.0)
    {
        math_error("acos domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ from_radians(std::acos(value)) };
}
