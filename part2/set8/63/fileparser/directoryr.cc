#include "fileparser.ih"

    // by 

void FileParser::directoryr()
{
    fs::path const dir = Options::instance().source();
    for (fs::directory_entry const &entry : 
                                fs::recursive_directory_iterator(dir))
    {
        if (isSource(entry))            
            d_files.push(entry.path().string());        
    }

}
