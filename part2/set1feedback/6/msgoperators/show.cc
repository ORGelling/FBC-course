#include "msgoperators.ih"

namespace {                                         // file local array for 
    char const *names[] =                           // output of enum types 
    {             
        "DEBUG", 
        "INFO", 
        "NOTICE", 
        "WARNING",
        "ERR",
        "CRIT", 
        "ALERT", 
        "EMERG"
    };
    
    size_t MsgSize = 8;                             // Avoiding Magic Numbers
}

void MsgOperators::show(Msg msg)
{
    for (size_t count = 0; count != MsgSize; ++count)   // could refactor?
    {
        if (toInt(msg) & (1 << count))          // find the set bits in msg
            cout << names[count] << ' ';        // show corresponding enum
    } 
    
    if (!msg)                                   // check NONE separately
        cout << "NONE";
    
    cout << '\n';
}
