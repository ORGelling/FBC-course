#ifndef _INCLUDED_RULEVALUE_H_
#define _INCLUDED_RULEVALUE_H_

#include <string>
#include <memory>
#include <vector>

struct RuleValue
{
    enum Type
    {
        VALUE,
        VARIABLE,
        FUNCNAME,
        ARGLIST
    };

    Type        d_type;
    double      d_number;
    unsigned    d_idx;
    
    std::string d_name;
    std::shared_ptr<std::vector<double>> d_args;

    public:
        RuleValue();
        RuleValue(double value);
        RuleValue(unsigned idx);
        RuleValue(std::string const &name);
        
        static RuleValue arglist();
};

#endif
