#include "functions.ih"

RuleValue Functions::call_function(string const &fun, 
                                                    ArgVec const &args) const
{
    auto it = s_functions.find(fun);
    if (it == s_functions.end())
        throw std::runtime_error{ fun + " not available" };
    
    return (this->*(it->second))(args);
}
