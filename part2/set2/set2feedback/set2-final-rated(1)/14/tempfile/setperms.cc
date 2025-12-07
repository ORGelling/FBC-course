#include "tempfile.ih"

    // by 

void TempFile::setPerms(fs::perms permissions)
try
{                                                           
//  throw fs::filesystem_error( "permissions", d_filename,  // test throw
//                          make_error_code(std::errc::permission_denied));
    fs::permissions(d_filename, permissions);       // set perms
}
catch (fs::filesystem_error const &fileExcept)
{
    removeFile();
    throw;
}                               // clears object contents and rethrows
