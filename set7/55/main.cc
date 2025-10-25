#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;
    
    // For testing manually handing the .lck file's directory:
    // string directory = argv[2];
    // Lock fileLock(argv[1], directory);
    
    Lock fileLock(argv[1]);
    if (!fileLock.valid())
    {
        cerr << "could not open file\n";
        return 1;
    }
    
    fstream writeFile(argv[1], ios::app);
    
    string appendText;
    cerr << "? ";
    
    getline(cin, appendText);
    writeFile << appendText << '\n';
}
