#include "calculator.ih"

    // by main.cc 

void Calculator::run()
{
    while (true)
    {
        cout << "? ";
        if (!d_parser.reset())
            break;
                                // Add getlhsexpression()?
        if (expression())       // Use expression() only for d_op & d_rhs?
            evaluate();         // Have evaluate send to cout *and* set d_lhs?
        else
        {
            usage();
            break;
        }
    }
}
