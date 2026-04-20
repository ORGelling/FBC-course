#include "parser.ih"

RuleValue::RuleValue()
:
    d_type(VARIABLE),
    d_idx(0)
{}

RuleValue::RuleValue(double value)
:
    d_type(VALUE),
    d_number(value)
{}

RuleValue::RuleValue(unsigned idx)
:
    d_type(VARIABLE),
    d_idx(idx)
{}

RuleValue::RuleValue(std::string const &name)
:
    d_type(FUNCNAME),
    d_name(name)
{}

RuleValue RuleValue::arglist()
{
    RuleValue rv;
    rv.d_type = ARGLIST;
    rv.d_args = std::make_shared<std::vector<double>>();
    return rv;
}
