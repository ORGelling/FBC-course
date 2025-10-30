#include "main.ih"

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
    Arg &arg = Arg::initialise("f:h:v:qx:y:", 
                    longOptions, longEnd, argc, argv);
    // code using arg, etc.
    string *value = new string;
    
    cerr << "x " << arg.option(value, 'x') << ": " << *value << '\n';
    cerr << "y " << arg.option(value, 'y') << ": " << *value << '\n';
    cerr << "q " << arg.option(value, 'q') << ": " << *value << '\n';
    cerr << "only " << arg.option(value, "only") << ": "
        << *value << '\n';
    cerr << "f " << arg.option(value, 'f') << ": " << *value << '\n'
        << "filenames " << arg.option(value, "filenames") << ": "
        << *value << '\n';
    cerr << "v " << arg.option(value, 'v') << ": " << *value << '\n'
        << "version " << arg.option(value, "version") << ": "
        << *value << '\n';
    
}
catch (...)
{}
