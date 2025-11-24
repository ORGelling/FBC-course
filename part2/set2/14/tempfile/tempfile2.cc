#include "tempfile.ih"

    // by 

TempFile::TempFile(TempFile &&other)
//:                         // both members default to values safe to swap
{   
    swap(other);
    cout << "move constructing " << d_filename << '\n';
}
