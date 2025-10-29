#include "arg/arg.h"
#include <iostream>


using namespace std;

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"debug", Arg::Required},
        Arg::LongOption{"filenames", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
        Arg::LongOption{"only", Arg::Required},
        Arg::LongOption{"long", Arg::Required},
    };
    auto longEnd = longOptions + std::size(longOptions);
}

int main(int argc, char **argv)
try
{
    Arg &arg = Arg::initialise("f:h:v:", 
                    longOptions, longEnd, argc, argv);
    // code using arg, etc.
    string *value = new string;
    cout << arg.nArgs() << '\n'
        << arg.nOptions() << '\n'
        << arg.option(value, 'f') << '\n'
        << *value << '\n';
    cout << arg.option("only") << '\n';
    cout << arg.option(value, "long") << '\n';
    cout << *value << '\n';
}
catch (...)
{}
