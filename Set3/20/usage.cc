#include "main.ih"

namespace{

char const usageMessage[] = 
R"(This program counts the number of characters, words, or lines from
the input stream
It must be called with one of the following flags,

-c characters
-w words
-l lines

Thank you for using this program, and happy exercise rating!
)";
}

void usage()
{
    cout << usageMessage;
}
