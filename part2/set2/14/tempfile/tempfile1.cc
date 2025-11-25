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
    
    throw ios_base::failure("Failed to open stream"s);    // test throw
    d_file.open(d_filename, ios::in | ios::out | ios::trunc);
                                // We want errors in this to leave ctor
    
    setPerms(permissions);      // not this one tho, as file now exists.
}
catch (...)
{
    handleExceptions();
}                               // doing this in main instead
