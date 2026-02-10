#include "killer.ih"

    // by 

Killer::Killer(char **argv)
:
    d_path(argv[1]),            // main does input check
    d_nLines(argv[2]),
    d_duration(0),
    d_semaphore(0)
{
    if (argv[3])
        d_duration = stoul(argv[3]);
}
