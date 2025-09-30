#include "calculator.ih"

    // by expression.cc

bool Calculator::getOperator()
{
    string const substring = d_parser.next();
    
    d_op = substring.empty() ? '\0' : substring[0];
    string const validOperators = "+-*/%"; 
    
    if (validOperators.find(d_op) == string::npos)
    {
        cout << "invalid operator\n";
        return false;
    }
    return true;
    //return d_op == '+' || d_op == '-' || d_op == '*' || d_op == '/'
    //       || d_op == '%';
}
