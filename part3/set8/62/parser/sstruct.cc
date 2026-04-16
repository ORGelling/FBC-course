#include "parser.ih"

RuleValue::RuleValue(char const *txt)
:
    text(txt)
{}

RuleValue::RuleValue(std::string const &txt)
:
    text(txt)
{}

RuleValue::RuleValue(std::vector<std::string> const &rhs)
:
    symbols(rhs)
{}

RuleValue::RuleValue(std::vector<std::vector<std::string>> const &alts)
:
    alternatives(alts)
{}
