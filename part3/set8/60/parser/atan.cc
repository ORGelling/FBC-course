#include "parser.ih"

RuleValue Parser::atan(RuleValue &expr)
{
    double value = valueOf(expr);

    return RuleValue{ from_radians(std::atan(value)) };
}
