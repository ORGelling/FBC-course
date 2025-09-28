#include "calculator.ih"

    // by expression.cc

bool Calculator::getOperator()
{
    d_op = d_parser.next()[0];                      // parse operator symbol
    
    string const validOperators = "+-*/%";          // verify
    if (validOperators.find(d_op) == string::npos)
        return false;
    
    return true;
}
