#include "main.ih"

    // by 

int handleExceptions()
{
    try
    {
        rethrow_exception(current_exception());
    }
    catch (bad_alloc const &memFault)
    {
        cerr << "Strings: " << memFault.what() << '\n';
    }
    catch (int errcode)
    {
        cerr << "Strings: default constructor error: " << errcode << '\n';
    }
    catch (...)
    {
        cerr << "Strings: unexpected exception\n";
    }
    return 1;
}
