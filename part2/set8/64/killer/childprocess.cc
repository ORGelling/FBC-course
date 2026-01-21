#include "killer.ih"

    // by 

void Killer::childProcess()
{
    execl(d_path, "lines", d_nLines, 0);        // execl replaces current  
                                                // process image with d_path
    perror("execl");                        // prints last system error
}                                           // msg prefaced with "execl:"
