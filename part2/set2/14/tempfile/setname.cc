#include "tempfile.ih"

    // by 

fs::path TempFile::setName(fs::path const &directory, 
                           fs::path const &pattern) const
{
    fs::path tempPath = directory;
    
    string temp = pattern.filename();
    randomName(temp);
    
    return tempPath /= temp;            // /-append new randomised filename
}
