#include "procacc.ih"

    // by 

void ProcAcc::showAll() const
{                                                                              
    cout << "'" + d_processName + "' ";                                    
    switch (d_signal)                                                      
    {                                                                      
        case SIGKILL:                                                      
            cout << "KILL";                                                
        break;                                                             
        case SIGTERM:                                                      
            cout << "TERM";                                                
        break;                                                             
        default:
            cout << (d_signal != 0 ? d_signal : d_exitcode);      
    }                                                                      
    cout << '\n';                                                          
} 
