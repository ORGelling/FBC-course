#include "taskthreads.ih"

    // by 

TaskThreads::TaskThreads(char **argv)           // should convert to bool:
:                                               // true if 2nd cl argument 
    d_seq(argv[2]),                             // is given, null if not
    d_filename(argv[1]) 
{                      
    setFile(argv[1]);
}
