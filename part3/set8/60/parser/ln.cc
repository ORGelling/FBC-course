#include "parser.ih"

RuleValue Parser::ln(RuleValue &expr)
{
    double value = valueOf(expr);

    if (value <= 0)
    {
        math_error("ln domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ std::log(value) };
}
