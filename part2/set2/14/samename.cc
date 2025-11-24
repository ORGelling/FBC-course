#include "main.ih"

int main()
try
{
    TempFile temp1("/tmp"s, "TMP1.tmp"s);       // Duplicate file
    TempFile temp2("/tmp"s, "TMP1.tmp"s);       // *should* throw
}
catch (exception const &exc)                    // should catch 1:1 but this 
{                                               // is just a demonstration
    cerr << "TempFile: " << exc.what() << '\n';
}
catch (...)
{}
