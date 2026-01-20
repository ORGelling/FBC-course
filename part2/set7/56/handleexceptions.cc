#include "main.ih"

int handleExceptions()
{
    try
    {
        rethrow_exception(current_exception());
    }
    catch (string const &excStr)
    {
        cerr << "TaskThreads: " << excStr << '\n';
        return 1;
    }
    catch (runtime_error const &excRun)
    {
        cerr << "TaskThreads: " << excRun.what() << '\n';
        return 2;
    }
    catch (...)
    {
        cerr << "TaskThreads: Unknown exception\n";
        return 3;
    }
}
