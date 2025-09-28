#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <iosfwd>
#include <string>
#include <sstream>

class Calculator
{
    std::string d_line;          // whole input line
    std::istringstream d_in;     // parser for the current line

    double d_lhs = 0.0;
    double d_rhs = 0.0;
    bool   d_lhsIsInt = false;
    bool   d_rhsIsInt = false;
    char   d_op = 0;

    static constexpr double EPS = 1e-8;   // “close to zero” threshold

  public:
    void run();                    // interactive loop

  private:
    bool expression();             // parse "number op number" into members
    bool number(double *dest, bool *isInt);
    bool getOperator(char *op);
    void evaluate();               // compute + print result (or error)
};

#endif

