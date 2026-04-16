#include "parser.ih"

RuleValue Parser::acos(RuleValue &expr)
{
    double value = valueOf(expr);

    if (value < -1.0 || value > 1.0)
    {
        math_error("acos domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ from_radians(std::acos(value)) };
}
