#include "main.ih"

int main()
try
{
    TempFile temp1("/tmp"s, "TMP1.tmp"s);       // Duplicate file
    TempFile temp2("/tmp"s, "TMP1.tmp"s);       // *should* throw
}
catch (...)
{
    return 1;
    //return TempFile::handleExceptions();
}                                       // Handle ctor exceptions here
