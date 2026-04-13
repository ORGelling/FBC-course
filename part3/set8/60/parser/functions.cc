#include "parser.ih"

void Parser::math_error(char const *msg)
{
    cout << "math error: " << msg << '\n';
    d_display = false;
}

RuleValue Parser::exp(RuleValue &expr) const
{
    return RuleValue{ std::exp(valueOf(expr)) };
}

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

RuleValue Parser::sin(RuleValue &expr) const
{
    return RuleValue{ std::sin(to_radians(valueOf(expr))) };
}

RuleValue Parser::asin(RuleValue &expr)
{
    double value = valueOf(expr);

    if (value < -1.0 || value > 1.0)
    {
        math_error("asin domain");
        return RuleValue{ 0.0 };
    }

    return RuleValue{ from_radians(std::asin(value)) };
}

RuleValue Parser::cos(RuleValue &expr) const
{    
    return RuleValue{ std::cos(to_radians(valueOf(expr))) };
}

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

RuleValue Parser::tan(RuleValue &expr) const
{    
    return RuleValue{ std::tan(to_radians(valueOf(expr))) };
}

RuleValue Parser::atan(RuleValue &expr)
{
    double value = valueOf(expr);

    return RuleValue{ from_radians(std::atan(value)) };
}

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

RuleValue Parser::abs(RuleValue &expr) const
{
    return RuleValue{ std::fabs(valueOf(expr)) };
}
