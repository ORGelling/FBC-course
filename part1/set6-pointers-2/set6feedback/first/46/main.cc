//JB: 1
//JB: But see comments in this file.
#include "main.ih"

int main()
{
    Symtab symtab;
    while (true)
    {
        cout << "? ";       // a prompt

        string line; //JB: Odd name for a line.
        cin >> line;        // get a word

        //JB: BS: No way out of the loop.
        //JB: (So this program does not provide leak testing either.)

        if (line.empty())
            break;
        
        cout << "inserted " << symtab.find(line).ident() << "\n"
                "All symbols:\n";

        for (size_t idx = 0, end = symtab.size(); idx != end; ++idx)
            cout << symtab.at(idx).ident() << ' ';

        cout << '\n';
    }
}
