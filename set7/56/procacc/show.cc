#include "procacc.ih"

    // by 

void ProcAcc::show() const
{
    cout << "'" + d_processName + "' ";                                    
    switch (d_exitcode)                                                      
    {                                                                      
        case SIGKILL:                                                      
            cout << "KILL";                                                
        break;                                                             
        case SIGTERM:                                                      
            cout << "TERM";                                                
        break;                                                             
        default:
            cout << d_exitcode;
            //cout << (d_exitcode != 0 ? d_exitcode : d_signal);      
    }                                                                      
    cout << '\n';                                                          
} 
