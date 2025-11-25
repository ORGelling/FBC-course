#include "tempfile.ih"

    // by 

bool TempFile::openFile()
{
    try
    {
        d_file.open(d_filename, ios::in | ios::out | ios::trunc);   // create
        return true;
    }
    catch (ios_base::failure const &streamExcept)
    {
        cerr << "TempFile: " << streamExcept.what() << '\n';
    }
    return false;
}
