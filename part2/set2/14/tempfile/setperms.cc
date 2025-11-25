#include "tempfile.ih"

    // by 

void TempFile::setPerms(fs::perms permissions) const
{
    try
    {
        fs::permissions(d_filename, permissions);   // set perms
//      throw fs::filesystem_error( "permissions", d_filename, 
//                          make_error_code(std::errc::permission_denied));
    }
    catch (fs::filesystem_error const &fileExcept)
    {
        cerr << "TempFile: " << fileExcept.what() << '\n';
    }
}                           // Object ctor should complete even if this fails
