#include "main.ih"

void convert(char *filename)
{
    fstream file(filename, ios::in | ios::out);
    if (!file)                              // test file presence
    {
        cerr << "Unable to open file\n";
        return;
    }
    
    size_t setPos = file.tellg();           // set initial position
    string storeData;
    while (getline(file, storeData))
    {
        if (storeData.find("email:") != string::npos)
        {
            file.seekp(setPos);             // back to start of line
            file << lowercase(storeData);   // write line in lowercase
        }
        setPos = file.tellg();              // store next line position
    }
}
