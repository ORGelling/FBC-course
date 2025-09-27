#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include "../../29/parser/parser.h"

class Calculator
{
    Parser d_parser;

public:
    void run();

private:
    // For parsing input lines the class has a member bool expression(), which
    // uses a member bool number(double *dest, bool *isInt) to parse the next
    // line element as a number and bool getOperator() which returns true if the
    // next line element is a valid operator. If expression() returns true then
    // evaluate() performs the requested computation, inserting the expression's
    // value in cout.
    bool expression();
    bool number(double *dest, bool *isInt);
    bool getOperator();  // ???
    void evaluate();     // ???
};

#endif
