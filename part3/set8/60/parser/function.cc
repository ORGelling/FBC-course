#include "parser.ih"

RuleValue Parser::function()
{
    return RuleValue(d_scanner.matched());
}
