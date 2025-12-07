#include "tempfile.ih"

    // by 

void TempFile::swap(TempFile &other)
{
    // memcpy fast swap probably unsafe
    std::swap(d_filename, other.d_filename);
    std::swap(d_file, other.d_file);
}
