// ES: ?
#include "main.ih"

bool promptGet1(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return bool(getline(in, str));  // ES: this is C way of doing it 
}                                   // ES: -- See Static Cast
