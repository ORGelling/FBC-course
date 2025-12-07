#include "tempfile.ih"

    // by 

TempFile::operator fstream() &&
{
    fstream tempStream = move(d_file);          // steal fstream
    removeFile();                               // simply remove the file
    
    return tempStream;                          // return open stream
    // return move(d_file);         // This works only with rvalue ref ction
}

//: fstream out = TempFile{ "/tmp/immediately-delete" };
//: This line has the object go o.o.s. as it reaches   ^ this semicolon
//
//: My solution can steal from any object since it forces file removal
