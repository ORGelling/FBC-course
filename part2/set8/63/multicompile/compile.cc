#include "multicompile.ih"

    // by 

void MultiCompile::compile(string const &line)
{
    string commands("g++ -Wall -Werror -c " + line);
    
    CmdFork cmdFork(commands);
    cmdFork.fork();
    
    // ... ?
}
