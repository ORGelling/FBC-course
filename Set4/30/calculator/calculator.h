#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_
#include <iosfwd>

class Calculator
{
    Parser d_parser;
    
    public:
        run();
        
    private:
        addition();
        subtraction();
        division();
        multiplication();
        modulo();
        
};
        
#endif
