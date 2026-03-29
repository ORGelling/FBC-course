#include "main.ih"

namespace 
{
    void show(set<string> &wordSet)         // basic output of set contents
    {
        for (string const &word : wordSet)
            cout << word << '\n';
    }
}

int main(int argc, char **argv)
{
    set<string> wordSet;                    // set ensures unique words
    
    if (argc == 1)
        process(wordSet);                   // use cin (default)
    else
        process(wordSet, argc, argv);       // provided filenames
    
    show(wordSet);                          // show all words stored in set
}
