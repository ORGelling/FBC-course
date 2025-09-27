#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_
#include "../parser/parser.h"
#include <iosfwd>

class Calculator
{
    Parser  d_parser;
    
    public:
        void run();
        
    private:
        bool expression();
        
        bool number(double *dest, bool *isInt);
        bool getOperator();
        bool evaluate();
        
        void usage();
};
        
#endif
