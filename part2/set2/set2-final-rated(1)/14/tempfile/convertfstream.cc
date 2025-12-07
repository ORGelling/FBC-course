#include "tempfile.ih"

    // by 

// HB: TC
TempFile::operator fstream() &&
{
    fstream tempStream = move(d_file);          // steal fstream
    removeFile();                               // simply remove the file
    // HB: handled automatically when the temporary expires
    
    return tempStream;                          // return open stream
}
