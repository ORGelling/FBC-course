#include "calculator.ih"

    // by s_unit.cc

Value Calculator::charUnit()
{
    switch (d_tokenizer.charValue())
    {
        case '(':
            return parenthesized();
        case '+':
            return factor();
        case '-':
            return unaryMinus();
        default:
            return notOK();
    }
}
