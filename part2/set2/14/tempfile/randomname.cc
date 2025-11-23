#include "tempfile.ih"

    // by 

void TempFile::randomName(string &temp) const
{
    for (char &ch : temp)
    {
        if (ch == '.')
            break;
        ch = generateChars();
    }                                               // refactor?
    temp.replace(0, 3, "TMP");
}
