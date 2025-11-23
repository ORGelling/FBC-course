#include "tempfile.ih"

    // by 

TempFile::~TempFile()
{
    if (d_file.is_open())
    {
        d_file.close();
        remove(d_filename);
        cout << "closed and removed temp file\n";
    }
}
