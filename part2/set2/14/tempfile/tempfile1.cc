#include "tempfile.ih"

    // by 

TempFile::TempFile(fs::path const &directory, 
                   fs::path const &filename_pattern,
                   fs::perms permissions)
:
    d_filename(setName(directory, filename_pattern))
{
    d_file.exceptions(ios::failbit | ios::badbit);  // set stream to throw
    
    if (openFile())
        setPerms(permissions);      // we check if parent path exists. if not
}                                   // we simply throw. User errs, user fixes
