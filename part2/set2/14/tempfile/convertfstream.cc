#include "tempfile.ih"

    // by 

TempFile::operator fstream() &&
{
    fstream tempStream = move(d_file);          // steal recources
    fs::path tempPath = move(d_filename);
    
    d_filename.clear();
    
    removeFile(tempPath);                       // use static fn to kill file
    
    return tempStream;                          // return open stream
}
