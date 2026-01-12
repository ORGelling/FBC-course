#include "main.ih"

int handleExceptions()
{
    try
    {
        rethrow_exception(current_exception());
    }
    catch (string const &err)
    {
        cerr << "FillUnique: " << err << '\n';
        return 1;
    }
    catch (invalid_argument const &argErr)
    {
        cerr << "FillUnique: " << argErr.what() << '\n';
        return 2;
    }
    catch (...)
    {
        cerr << "FillUnique: Unexpected exception\n";
        return 3;
    }
}
