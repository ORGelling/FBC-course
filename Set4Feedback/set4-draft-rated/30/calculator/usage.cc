#include "calculator.ih"

    // by run.cc

namespace
{

char const usageInformation[] = 
R"(This is a simple calculator. 

     Input is given by:
[number] [operator] [number]
  
 where the operator may be
     
     +   -   *   /   %

Only one computation can be 
      given in a line. 
Enter a blank line to quit.

         Thank you 
  for using our calculator.

)";

};

void Calculator::usage() const
{
    cout << usageInformation;
}
