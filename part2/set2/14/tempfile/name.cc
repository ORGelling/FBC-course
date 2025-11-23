#include "tempfile.ih"

    // by 

fs::path const &TempFile::name() const
{
    return d_filename;
}
