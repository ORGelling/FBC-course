#include "main.ih"

int handleException()
try
{
    rethrow_exception(current_exception());
}
catch (int value)
{
    cerr << "usage was called with value: " << value << '\n';
    return value;
}
catch (string &text)
{
    cerr << text << '\n';
    return 1;
}
catch (exception const &exc)
{
    cerr << exc.what() << '\n';
    return 1;
}
