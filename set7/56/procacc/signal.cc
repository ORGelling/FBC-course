#include "procacc.ih"

    // by 

void ProcAcc::signal()
{
    if (d_exitcode != 0 || d_signal != 0)
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
                cout << to_string(d_signal != 0 ? d_signal : d_exitcode);
        }
        cout << '\n';
    }
}
