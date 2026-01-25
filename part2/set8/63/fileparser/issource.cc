#include "fileparser.ih"

    // by 

bool FileParser::isSource(fs::directory_entry const &entry) const
{
    string const ext = entry.path().extension().string();
    
    return entry.is_regular_file() and 
          (ext == ".cc" or 
           ext == ".cpp" or 
           ext == ".cxx");
}                               // refactored check to only add C++ sources
