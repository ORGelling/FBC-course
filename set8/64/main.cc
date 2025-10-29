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
    string *value2 = new string;
    cout << "o: " << arg.option(value, 'o') << ' ' << *value << '\n'
        << "only: " << arg.option(value, "only") << ' '
        << *value << '\n';
    cout << "f: " << arg.option(value, 'f') << ' ' << *value << '\n'
        << "filenames: " << arg.option(value2, "filenames") << ' '
        << *value2 << '\n';
}
catch (...)
{}
