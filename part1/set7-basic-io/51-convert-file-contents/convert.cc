#include "main.ih"

int convert(char *filename)
{
    fstream file(filename, ios::in | ios::out);
    if (!file)                              // test file presence
    {
        cerr << "Unable to open file\n";
        return 1;
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
    return 0;
}
