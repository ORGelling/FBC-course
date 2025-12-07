#include "tempfile.ih"

    // by 

void TempFile::closeStream()
{
    if (d_file.is_open())
    {
        try
        {
            d_file.close();
        }
        catch (ios::failure const &streamExcept)
        {
            cerr << "TempFile: " << streamExcept.what() << '\n';
        }
    }
}
