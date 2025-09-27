#include "calculator.ih"

    // by main.cc 

void Calculator::run()
{
    while (true)
    {
        cout << "? ";
        if (!d_parser.reset())
            break;
        
        if (!expression())
        {
            usage();
            break;
        }
        else 
            evaluate();
    }
    
}
