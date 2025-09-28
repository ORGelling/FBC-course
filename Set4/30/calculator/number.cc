#include "calculator.ih"

    // by expression.cc

bool Calculator::number(double *dest, bool *isInt)
{
    if (d_parser.number(dest) != Parser::NUMBER)    // get operand
        return false;
    
   *isInt = d_parser.isIntegral();                  // for modulo
   return true;
}
