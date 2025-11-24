#include "tempfile.ih"

    // by 

void TempFile::setPerms(fs::perms permissions) const
{
    try
    {
        fs::permissions(d_filename, permissions);   // set perms
    }
    catch (fs::filesystem_error const &fileExcept)
    {
        cerr << "TempFile: " << fileExcept.what() << '\n';
    }
}
