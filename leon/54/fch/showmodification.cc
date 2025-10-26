#include "fch.ih"

    // by 

void Fch::showModification() const
{
    string underline(d_target.length(), '^');
    
    cerr << d_line << '\n'
        << setw(d_location) << "" << underline << '\n';
}
