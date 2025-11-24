#include "tempfile.ih"

    // by 

void TempFile::randomName(string &temp) const
{
    for (char &ch : temp)
    {
        if (ch == 'X')
            ch = generateChars();
    }
    temp.replace(0, 3, "TMP");
}
