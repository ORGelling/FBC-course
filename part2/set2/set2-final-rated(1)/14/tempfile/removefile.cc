#include "tempfile.ih"

    // by 

// HB: TC
void TempFile::removeFile()
{
    if (not d_filename.empty())
    {
        try
        {
            remove(d_filename); 
        }
        catch (fs::filesystem_error const &fileExcept) // HB: error_code is faster
        {
            cerr << "TempFile: " << fileExcept.what() << '\n';
        }
    }
}
