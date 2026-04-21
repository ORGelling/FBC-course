#include "rulevalue.ih"                         // Following suit with the 
                                                // demo parser provided for
RuleValue::RuleValue()                          // this set's 1st exercise 
:                                               // we keep the ctors for 
    d_type(VARIABLE),                           // rulevalue together for
    d_idx(0)                                    // simplicity. MF1F yes.
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
