#include "parser.ih"

void Parser::storeRules(RuleValue const &item1, RuleValue const &item3)
{
    for (auto const &rhs: item3.alternatives)
        d_rules.push_back(Rule{item1.text, rhs});
}
