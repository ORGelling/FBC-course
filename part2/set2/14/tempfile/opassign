#include "tempfile.ih"

    // by 

TempFile &TempFile::operator=(TempFile &&other)
{
    swap(other);
    cout << "move assigning " << d_filename << '\n';
    return *this;
}
