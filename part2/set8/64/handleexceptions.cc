#include "main.ih"

int handleExceptions()
try
{
    rethrow_exception(current_exception());
}
catch (string const &errStr)                
{                                           
    cerr << "Killer: " << errStr << '\n';
    return 1;
}                                           
catch (...)                                 
{                                           
    cerr << "Caught unknown exception\n";   
    throw;                                  
}  
