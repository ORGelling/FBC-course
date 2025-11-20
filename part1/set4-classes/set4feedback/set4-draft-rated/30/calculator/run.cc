#include "calculator.ih"

    // by main.cc 

void Calculator::run()
{
    usage();
    while (true)
    {
        cout << "? ";
        if (!d_parser.reset())          // get a line
            break;
        
        if (expression())               // parse its values
            evaluate();                 // compute
    }
}
