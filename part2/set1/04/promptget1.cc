#include "main.ih"

bool promptGet1(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return static_cast<bool>(getline(in, str));
}
