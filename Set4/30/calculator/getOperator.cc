#include "calculator.ih"

// by

bool Calculator::getOperator()
{
    string const op = d_parser.next();
    return op.find_first_of("+-*/%") != string::npos;
}
