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
        //Arg::LongOption{"cflags", 'c'},
        Arg::LongOption{"jobs", 'j'},
        Arg::LongOption{"output", 'o'},
    };
    
    auto longEnd = longOptions + std::size(longOptions);
    
    char const *optString = "ht:f:d:rj:o:";     // removed c:

}   // namespace

Options::Options(int argc, char **argv)
:
    d_arg(Arg::initialise(optString, longOptions, longEnd, argc, argv)),
    d_mode(SourceMode::CIN),
    d_source("."),
    d_tmp("tmp/"),
    //d_cflags("-Wall -Werror -std=c++26"),
    d_nThreads(thread::hardware_concurrency())
{
    setOptions();
}
