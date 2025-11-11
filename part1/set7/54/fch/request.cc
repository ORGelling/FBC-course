#include "fch.ih"

    // by 

char Fch::request() const
{
    char command;
    cerr << "change [ynYN]? ";          // requests user command
    cin >> command;
    return command;
}
