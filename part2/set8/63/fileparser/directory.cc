#include "fileparser.ih"

    // by 

void FileParser::directory()
{
    fs::path const dir = Options::instance().source();
    
    for (fs::directory_entry const &entry : fs::directory_iterator(dir))
    {
        if (isSource(entry))            
            d_files.push(entry.path().string());        
    }
}                                           // Filesystem my beloved
