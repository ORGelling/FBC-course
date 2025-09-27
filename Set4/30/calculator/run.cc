#include "calculator.ih"

void Calculator::run()
{
    while (d_parser.reset())
    {
        if (expression())
            evaluate();  // ??? what is this for
    }
}
