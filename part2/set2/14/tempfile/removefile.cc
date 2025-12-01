#include "tempfile.ih"

    // by 

void TempFile::removeFile()
{
    if (not d_filename.empty())
    {
        try
        {
            remove(d_filename);     // 
        }
        catch (fs::filesystem_error const &fileExcept)
        {
            cerr << "TempFile: " << fileExcept.what() << '\n';
        }
    }
}
