#include "main.ih"

int handleExceptions()
try
{
    rethrow_exception(current_exception());
}
catch (exception const &exc)
{
    cerr << "MultiCompile: " << exc.what();
    return 1;
}
catch (...)
{
    cerr << "MultiCompile: Unknown exception caught\n";
    return -1;
}
