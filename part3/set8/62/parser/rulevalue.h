#ifndef _INCLUDED_RULEVALUE_H_
#define _INCLUDED_RULEVALUE_H_

#include <string>
#include <vector>

struct RuleValue
{
    std::string text;
    std::vector<std::string> symbols;
    std::vector<std::vector<std::string>> alternatives;

    RuleValue() = default;
    RuleValue(char const *txt);
    RuleValue(std::string const &txt);
    RuleValue(std::vector<std::string> const &rhs);
    RuleValue(std::vector<std::vector<std::string>> const &alts);
};

#endif
