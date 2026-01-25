#include <iostream>
#include <string>
#include <chrono>
//#include "../63/arg/arg.h"
#include "../63/options/options.h"
#include <thread>
#include <filesystem>

using namespace std;
using namespace chrono;
namespace fs = filesystem;

/*
namespace {
    
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"help", 'h'},           // still need to add this
        Arg::LongOption{"multi", 'm'},
    };
    
    auto longEnd = longOptions + std::size(longOptions);
    
    char const *optString = "hm:";     // removed c:

}   // namespace
*/

int main(int argc, char **argv)
try
{
    Options::initialise(argc, argv);
    
    cout << Options::instance().source() << '\n';
    
/*  Arg &arg = Arg::initialise(optString, longOptions, longEnd, argc, argv);
    
    string hold;
    cout << arg.option(&hold, 'm') << ' ' 
        << hold << ' ' << arg.nArgs() << '\n';      */
}
catch (...)
{
    cout << "Don't fuck up the input args lmao\n";
}
