#include "handler.ih"

    // by available.cc connect.cc

bool Handler::specified(size_t nRequired)
{
    if (d_argc >= nRequired)        // all requests need nRequired arguments
        return true;

    cerr << d_argc << " arguments specified, " << nRequired << " required\n";
    return false;
}
