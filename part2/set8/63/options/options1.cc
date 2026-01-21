#include "options.ih"

    // by 

namespace {
    
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"tmp", 't'},
        Arg::LongOption{"file", 'f'},
        Arg::LongOption{"directory", 'd'},
        Arg::LongOption{"recursive", 'r'},
        Arg::LongOption{"cflags", 'c'},
        Arg::LongOption{"jobs", 'j'},
        Arg::LongOption{"output", 'o'},
    };
    
    auto longEnd = longOptions + std::size(longOptions);
    
    char const *optString = "ht:f:d:rc:j:o:";

}   // namespace

Options::Options(int argc, char **argv)
:
    d_arg(Arg::initialise(optString, longOptions, longEnd, argc, argv)),
    d_mode(SourceMode::ARGS),
    d_source("."),
    d_tmp("tmp/"),
    d_nThreads(1)
{
    setOptions();
}
