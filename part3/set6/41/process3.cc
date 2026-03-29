#include "main.ih"

void process(set<string> &wordSet, size_t argc, char **argv)
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
