#include "options.ih"

    // by 

namespace {
    
    char const message[] = R"(Usage: multicompl [options] <source-files...>

Compile multiple C++ source files with custom error handling and output
locations.

Options:
  -h,        --help             Show this help message and exit
  -f <file>, --file <file>      Provide a file naming all source files
  -d <dir>,  --directory <dir>  Provide a directory to find sources in
  -r,        --recursive        Find sources recursively. (If no directory 
                                provided: ./)
  -o <dir>,  --output <dir>     Output directory for compiled object files
                                (default: ./)
  -t <dir>,  --tmp <dir>        Temporary directory for error files
                                (default: ./tmp/)
  -j <#>,    --jobs <#>         Number of concurrent threads to use 
                                (default: max)

Arguments:
  <source-files...>     List of C++ files to compile. Used if no target set

Examples:
  multicompl -o build/ -t tmp/ main.cpp utils.cpp
  multicompl --help

Notes:
- Each compile error is written to a unique .err file in the temporary
  directory.
)";

}

void Options::usage()
{
    cout << message;
    
    //exit(exitcode);    
}
