#include "main.ih"

namespace {
    set<string> getSet(istream &in)
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
    set<string> const sortList = getSet(cin);
    
    cout << sortList;
}   
