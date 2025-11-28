#include "tempfile.ih"

    // by 

void TempFile::removeFile(fs::path const &filename)
{
    if (not filename.empty())
    {
        try
        {
            remove(filename);     // 
        }
        catch (fs::filesystem_error const &fileExcept)
        {
            cerr << "TempFile: " << fileExcept.what() << '\n';
        }
    }
}
