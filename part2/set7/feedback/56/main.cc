//JB: 1
#include "main.ih"

//JB:  :-)

int main(int argc, char **argv)
try
{
    if (argc == 1)
        throw "Please name a file to read"s;
    
    TaskThreads counter{ argv };
    counter.run();
}
catch (...)
{
    return handleExceptions();
}
