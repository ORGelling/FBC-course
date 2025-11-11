#include "calculator.ih"

    // by expression.cc

bool Calculator::number(double *dest, bool *isInt)
{
    if (d_parser.number(dest) != Parser::NUMBER)    // get operand
    {   
        cout << "invalid operand\n";                // Error message
        return false;
    }
    // HB: please handle the other two enum values directly
    
   *isInt = d_parser.isIntegral();                  // for modulo
   return true; // HB: watch the indentation
}
