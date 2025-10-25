#include "fch.ih"

    // by 

void Fch::showModification() const
{                                                       // generates underline
    string const underline(d_target.length(), '^');     // string    ^^^^^^^^^
    
    cerr << d_line << '\n'
        << setw(d_location) << "" << underline << '\n';
}                                           // underlines target text
