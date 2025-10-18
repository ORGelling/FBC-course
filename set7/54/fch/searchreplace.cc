#include "fch.ih"

    // by fch1.cc

void Fch::searchReplace()
{
    cerr << "target: ";
    getline(cin, d_target);
    cerr << "replacement: ";
    getline(cin, d_replacement);
}
