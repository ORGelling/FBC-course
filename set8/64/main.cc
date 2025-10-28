#include "arg/arg.h"
#include <iostream>


using namespace std;

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"debug"},
        Arg::LongOption{"filenames", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
    };
    auto longEnd = longOptions + std::size(longOptions);
}

int main(int argc, char **argv)
try
{
    Arg &arg = Arg::initialise("df:hv", 
                    longOptions, longEnd, argc, argv);

    // code using arg, etc.
    cout << arg.nArgs() << '\n'
        << arg.nOptions() << '\n'
        << arg.option('f') << '\n';
}
catch (...)
{}
