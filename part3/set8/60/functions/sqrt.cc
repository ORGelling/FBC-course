#include "functions.ih"

RuleValue Functions::sqrt(ArgVec const &args) const
{
    argCount(args, 1);

    double value = args[0];

    if (value < 0)
    {
        math_error("sqrt domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ std::sqrt(value) };
}
