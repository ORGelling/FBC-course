#include "calculator.ih"

    // by expression.cc

bool Calculator::getOperator()
{
    string const substring = d_parser.next();
    
    d_op = substring.empty() ? '\0' : substring[0];
    
    return d_op == '+' || d_op == '-' || d_op == '*' || d_op == '/'
           || d_op == '%';
}
