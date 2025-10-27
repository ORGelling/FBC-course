#include "lock.ih"

    // by 

Lock::Lock(string const &path)
:
    Lock(path, stringName(path, dirname))   // get string filename
{}                                          // and delegate
