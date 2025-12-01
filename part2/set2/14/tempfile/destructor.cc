#include "tempfile.ih"

    // by 

TempFile::~TempFile()
{
    closeStream();
    
    removeFile(d_filename);
}
