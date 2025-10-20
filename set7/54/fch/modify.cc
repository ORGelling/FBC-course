#include "fch.ih"

    // by 

void Fch::modify()
{
    string const prefix = d_line.substr(0, d_location);
    string const postfix = d_line.substr(d_location + d_target.length(), 
                                                            d_line.length());
    d_line = prefix + d_replacement + postfix;
}
