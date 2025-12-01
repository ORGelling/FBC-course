#include "main.ih"

istream &promptGet2(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return getline(in, str);
}
