#include "tempfile.ih"

    // by 

TempFile::TempFile(fs::path const &directory, 
                   fs::path const &filename_pattern,
                   fs::perms permissions)
try
:
    d_filename(setName(directory, filename_pattern))
{
    d_file.exceptions(ios::failbit | ios::badbit);  // set stream to throw
    
    alreadyExists();
    d_file.open(d_filename, ios::in | ios::out | ios::trunc);
    
    setPerms(permissions);          // Handles removal and rethrows, since
}                                   // file now created and stream open
catch (...)
{
    handleExceptions();
}
