#include "main.ih"

    // argv[1] is the name of the file to process

int main(int argc, char **argv)
{
    ifstream in{ argv[1] };

    if (not in)
    {
        cout << "can't open " << argv[1] << '\n';
        return 1;
    }

    Lines lines1{ in };

    cout << "[Lines1's lines, direct]\n";
    for (string const &line : lines1.get())         // lines1's lines
        cout << line << '\n';
    
    {
        Lines lines2{ in };                         // Local lines2, will
        cout << "-\n[Lines2's lines, direct]\n";     // decay at closing '}'
        for (string const &line : lines2.get())     // lines2's lines
            cout << line << '\n';
    }
    
    cout << "-\n[Lines2 doesn't exist anymore. lines1.get(1) shows]\n";
    for (string const &line : lines1.get(1))    // lines2's lines via lines1
        cout << line << '\n';
    
    Lines lines3{ in };
    cout << "-\n[Lines3's lines, through lines1]\n";
    for (string const &line : lines1.get(2))        // lines3's lines
        cout << line << '\n';

    cout << "-\n[Lines3's lines, direct]\n";
    for (string const &line : lines3.get())         // lines3's lines
        cout << line << '\n';

    cout << "-\n[Lines1's lines, through lines3]\n";
    for (string const &line : lines3.get(0))        // lines1's lines
        cout << line << '\n';

    cout << "-\n[Non-existing 4th Lines object's lines]\n";
    for (string const &line : lines1.get(3))
        cout << line << '\n';
}
