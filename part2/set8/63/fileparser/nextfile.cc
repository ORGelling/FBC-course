#include "fileparser.ih"

    // by 

bool FileParser::nextFile(string &line)
{
    if (d_files.empty())
        return false;
    
    line = d_files.front();
    d_files.pop();
    return true;
}
