#include "strings.ih"

    // by 

void Strings::handleExceptions()
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
    throw;      // can throw 1; for ease of use in program
}
