#include "main.ih"

namespace 
{
    
    void show(set<string> &wordSet)         // basic output of set contents
    {
        for (string const &word : wordSet)
            cout << word << '\n';
    }
    
    
    void process(Scanner &scan, set<string> &wordSet)
    {
        while (int term = scan.lex())
        {                                       // we only store/read WORDS
            if (term == WORD)                   // so we just use an if
                wordSet.insert(scan.matched());     // stores word in set
        }
    };
    
    
    void processCin(set<string> &wordSet)
    {
        Scanner scan;                       // creates default scanner
        
        process(scan, wordSet);             // adds the word tokens to set 
    };
    
    
    void processFiles(set<string> &wordSet, size_t argc, char **argv)
    {
        for (size_t idx = 1; idx != argc; ++idx)
        {
            ifstream in{ argv[idx] };       // opens a stream to named file
            
            if (not in.is_open())           // safety check
                throw 1;                    // should prob throw rte
            
            Scanner scan{ in };             // creates scanner with stream
            
            process(scan, wordSet);         // adds words to set
        }
    };
    
}

int main(int argc, char **argv)
{
    set<string> wordSet{};                  // set ensures unique words
    
    switch (argc)
    {
        case 1:                                     // if no cl args provided
            processCin(wordSet);                    // use cin (default)
        break;
        default:                                    // else loop over all
            processFiles(wordSet, argc, argv);      // provided filenames
        break;
    }
    
    show(wordSet);                          // show all words stored in set
}
