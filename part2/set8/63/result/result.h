#ifndef INCLUDED_RESULT_
#define INCLUDED_RESULT_
#include <string>

struct Result
{
    bool success;
    std::string sourceFile;
    std::string errFile;
};
        
#endif
