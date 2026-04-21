#include "parser.ih"

RuleValue Parser::callFunction(std::string const &name, 
                                            Functions::ArgVec const &args)
try
{
    return d_functions.call_function(name, args);
}
catch (std::exception const &exc)
{
    d_display = false;
    cout << exc.what() << '\n';
    return RuleValue{ 0.0 };
}
