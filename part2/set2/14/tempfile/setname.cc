#include "tempfile.ih"

    // by 

fs::path TempFile::setName(fs::path const &directory, 
                           fs::path const &pattern) const
{
    fs::path tempPath = directory;
    
    // modify pattern
    string temp = pattern.filename();
    randomName(temp);
    
    tempPath /= temp;
    
    return tempPath;
}
