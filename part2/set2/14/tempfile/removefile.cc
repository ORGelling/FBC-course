#include "tempfile.ih"

    // by 

void TempFile::removeFile()
{
    error_code ec;                      // swallows up exceptions
    remove(d_filename, ec);             // thrown from here
}
