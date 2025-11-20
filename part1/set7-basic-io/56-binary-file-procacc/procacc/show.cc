#include "procacc.ih"

    // by 

void ProcAcc::show() const
{
    cout << "'" + d_processName + "' ";                                    
    switch (d_signal)                                                      
    {                                                                      
        case SIGKILL:                                                      
            cout << "KILL";
            //cout << " " << hex << d_record.ac_exitcode << dec;
        break;
        case SIGTERM:
            cout << "TERM";
            //cout << " " << hex << d_record.ac_exitcode << dec;
        break;                                                             
        default:
            cout << d_signal; // << " " << d_exitcode;
            //cout << (d_signal != 0 ? d_signal : d_exitcode);
            //cout << " " << hex << d_record.ac_exitcode << dec;
    }                                                                      
    cout << '\n';                                                          
} 
