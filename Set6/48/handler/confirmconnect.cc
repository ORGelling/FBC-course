#include "handler.ih"

    // by

int Handler::confirmConnect()
{
    d_data = s_shared.connect(d_argv[1]);       // this one takes char const *
    if (d_data == nullptr)
        return 1;
    return 0;
}
