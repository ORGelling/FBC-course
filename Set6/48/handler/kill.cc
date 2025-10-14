#include "handler.ih"

    // by

int Handler::kill()
{
    if (Shared::kill(stoi(d_argv[1])))
    {
        cout << "killed memory segment: " << d_argv[1] << '\n';
        return 0;
    }
    cout << "murder failed\n";
    return 1;
}
