#include "calculator.ih"

    // by s_unit.cc

Value Calculator::charUnit()
{
    //nextToken();
    cout << "charUnit\n";
    switch (d_tokenizer.charValue())
    {
        case '(':
            nextToken();
            return parenthesized();
        case '+':
            nextToken();
            return factor();
        case '-':
            nextToken();
            return unaryMinus();
        default:
            nextToken();
            return notOK();
    }
}
