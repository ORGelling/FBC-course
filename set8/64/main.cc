#include "arg/arg.h"

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
    auto longEnd = longEnd = longOptions + std::size(longOptions)
}

int main(int argc, char **argv)
try
{
    Arg &arg = Arg::initialize("df:hv", 
                    longOptions, longEnd, argc, argv);

    // code using arg, etc.
}
