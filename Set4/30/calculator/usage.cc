#include "calculator.ih"

    // by run.cc evaluate.cc

namespace
{

char const usageInformation[] = 
R"(This is a simple calculator app. 

     Input is given by:
[number] [operator] [number]
  
 where the operator may be
     
     +   -   *   /   %

Multiple inputs can be given in 
one line, they will be evaluated 
from left to right. Enter a blank 
line to quit.

Thank you for using our calculator.
)";

};

void Calculator::usage()
{
    cout << usageInformation;
}
