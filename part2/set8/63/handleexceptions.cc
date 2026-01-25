#include "main.ih"

int handleExceptions()
try
{
    rethrow_exception(current_exception());
}
catch (exception const &exc)                // only really throwing these
{                                           
    cerr << "MultiCompile: " << exc.what() << '\n';
    return 1;
}
catch (...)
{
    cerr << "MultiCompile: Unknown exception caught\n";
    throw;
}
