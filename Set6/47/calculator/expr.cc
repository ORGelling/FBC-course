#include "calculator.ih"

    // by evaluate.cc

Value Calculator::expr()
{
    cout << "expr\n";
    Value ret = term();                                 // the expr's term

    while ((this->*s_term[charTokens("+-")])(ret))      // add or sub terms
        ;

    return ret;
}
