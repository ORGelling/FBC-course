#include "tempfile.ih"

    // by 

TempFile::operator fstream() &&
{
    fstream tempStream = move(d_file);          // steal fstream
    removeFile();                               // simply remove the file
    
    return tempStream;                          // return open stream
    //return move(d_file);                // it was this simple all along?
}
