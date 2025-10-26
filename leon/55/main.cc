#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    
    Lock fileLock(argv[1]);
    
    if (fileLock.valid())
    {
        fstream writeFile(argv[1], ios::app);
        
        string appendText;
        cerr << "? ";
        
        getline(cin, appendText);
        writeFile << appendText << '\n';
    }
    else
    {
        cerr << "failed to open file\n";
        return 1;
    }
}
