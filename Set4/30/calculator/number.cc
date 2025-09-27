#include "calculator.ih"

    // by expression.cc

Calculator::number(double *dest, bool *isInt)
{
    if (d_parser.number(dest) != Parser::NUMBER)
        return false;
    
   *isInt = d_parser.isIntegral();
   return true;
}
