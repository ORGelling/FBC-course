//JB: 1
// JB: :-)
#include "main.ih"

namespace {
    
    set<string> getUniqueWords(istream &in)
    {
        string word;
        set<string> textSet;
        while (cin >> word)
            textSet.insert(word);
        
        return textSet;
    }
    
    ostream &operator<<(ostream &out, set<string> textSet)
    {
        for (string const &entry : textSet)
            out << entry << '\n';
        
        return out;
    }
}

int main() 
{    
    set<string> const sortList = getUniqueWords(cin);
    
    cout << sortList;
}   
