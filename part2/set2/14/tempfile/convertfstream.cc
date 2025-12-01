#include "tempfile.ih"

    // by 

TempFile::operator fstream() &&
{
    fstream tempStream = move(d_file);          // steal fstream
    
    TempFile tmp = move(*this);                 // make object file go out
                                                // of scope at function end
    return tempStream;                          // return open stream
}
