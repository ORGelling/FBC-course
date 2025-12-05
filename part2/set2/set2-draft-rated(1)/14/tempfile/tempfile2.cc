#include "tempfile.ih"

    // by 

// HB: TC
TempFile::TempFile(TempFile &&other)
//:                         // both members default to values safe to swap
{   
    swap(other);
}
