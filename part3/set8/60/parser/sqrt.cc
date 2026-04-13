#include "parser.ih"

RuleValue Parser::sqrt(RuleValue &expr)
{
    double value = valueOf(expr);

    if (value < 0)
    {
        math_error("sqrt domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ std::sqrt(value) };
}
