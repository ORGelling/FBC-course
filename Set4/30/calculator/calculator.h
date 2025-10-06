#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_
#include "../../29/parser/parser.h"
#include <iosfwd>

class Calculator
{
    Parser  d_parser;
    
    double  d_lhs = 0.0;
    double  d_rhs = 0.0;
    char    d_op = '\0';
    bool    d_lhsIsInt = false;
    bool    d_rhsIsInt = false;
    
    public:
        void run();
        
    private:
        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate() const;
        bool verifyDivision() const;
        bool verifyModulo() const;
        void usage() const;
};
        
#endif
