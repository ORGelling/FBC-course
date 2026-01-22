#include "fileparser.ih"

    // by 

void FileParser::cin(istream &in)
{
    string nextFile;
    while (getline(in, nextFile))       // not checking extensions as user 
    {                                   // should have done that in the file
        if (not nextFile.empty())
            d_files.push(nextFile);
    }
}
