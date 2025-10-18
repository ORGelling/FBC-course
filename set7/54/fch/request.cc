#include "fch.ih"

    // by 

char Fch::request() const
{
    char command;
    cerr << "change [ynYN]? ";
    cin >> command;
    return command;
}
