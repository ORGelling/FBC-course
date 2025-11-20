#include "main.ih"

namespace
{

char const usageMessage[] =
R"(Program usage:

This program manages commandline input arguments. 
Any amount of arguments can be specified, but the first argument should be a
non-negative integer. It will be used to select which argument to return.

The chosen argument will be shown. If no argument is available for that index
this message will be shown.

Have a nice day, and happy coding.
)";

}

void usage()
{
    cout << usageMessage;
}
