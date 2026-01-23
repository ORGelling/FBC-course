#include "fileparser.ih"

    // by 

void FileParser::cin(istream &in)
{
    string nextFile;
    while (getline(in, nextFile))
    {
        if (isSource(fs::directory_entry{ nextFile }))
            d_files.push(nextFile);
    }                                       // we do check, as a file like
}                                           // order.txt will contain .txt's
