#include "main.ih"

int handleExceptions()
try
{
    rethrow_exception(current_exception());
}
catch (exception const &exc)
{
    cerr << "Demo: " << exc.what() << '\n';
    return 1;
}
catch (...)
{
    cerr << "Demo: Unknown exception caught\n";
    throw;
}
