#include "main.ih"

int handleExceptions()
try
{
    rethrow_exception(current_exception());
}
catch (exception const &except) 
{
    cerr << "WorkForce: " << except.what() << '\n';
    return 2;
}
catch (...)
{
    cerr << "WorkForce: Unknown exception\n";
    throw;
}
