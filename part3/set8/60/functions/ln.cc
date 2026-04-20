#include "functions.ih"

RuleValue Functions::ln(ArgVec const &args) const
{
    argCount(args, 1);

    double value = args[0];

    if (value <= 0)
    {
        math_error("ln domain");        // just throws
        return RuleValue{ 0.0 };
    }

    return RuleValue{ std::log(value) };
}
