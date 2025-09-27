#include "calculator.ih"

    // by expression.cc

void Calculator::getOperator(*op)
{
    if (d_parser.number(op) != Parser::NO_NUMBER)
        return false;
    
    return true;
}
