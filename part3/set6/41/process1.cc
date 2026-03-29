#include "main.ih"

void process(Scanner &scan, set<string> &wordSet)
{
    while (int term = scan.lex())
    {                                       // we only store/read WORDS
        if (term == WORD)                   // so we just use an if
            wordSet.insert(scan.matched());     // stores word in set
    }
};
