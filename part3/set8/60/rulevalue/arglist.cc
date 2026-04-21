#include "rulevalue.ih"

RuleValue RuleValue::arglist()
{
    RuleValue rv;
    rv.d_type = ARGLIST;
    rv.d_args = std::make_shared<std::vector<double>>();
    return rv;
}
