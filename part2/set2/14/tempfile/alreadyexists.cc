#include "tempfile.ih"

    // by 

void TempFile::alreadyExists() const
{
    if (fs::exists(d_filename))
        throw runtime_error("duplicate file name "s + d_filename.string());
}
