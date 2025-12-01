#include "tempfile.ih"

    // by 

// HB: TC
TempFile &TempFile::operator=(TempFile &&other)
{
    swap(other);
    cout << "move assigning " << d_filename << '\n';
    return *this;
}
