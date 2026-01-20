#include "killer.ih"

    // by 

void Killer::childProcess()
{
    execl(d_path, "lines", d_nLines, 0);
    perror("exec");
}
