#include "fileparser.ih"

    // by 

void FileParser::source()
{
    // open fstream
    ifstream file(Options::instance().source());
    if (not file.is_open())
        throw runtime_error{ "FileParser: could not open file" };
    
    cin(file);                  // now we can just use the cin function
}
