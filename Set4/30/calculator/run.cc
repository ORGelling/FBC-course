#include "calculator.ih"

    // by main 

void Calculator::run()
{
    while (!d_parser.reset())
    {
        // Use expression() to parse input line
        // expression() calls number, getOperator, and number again to validate
        if (!expression())
        {
            usage();
            return 1;
        }
    }
    
}
