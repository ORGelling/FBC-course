#include "handler.ih"

    // by

int Handler::kill()
{
    if (!available(2))
        return 1;
    
    if (Shared::kill(stoi(d_argv[1])))
    {
        cout << "killing memory segment: " << d_argv[1] << '\n';
        return 0;
    }
    cout << "murder failed\n";
    return 1;
}
