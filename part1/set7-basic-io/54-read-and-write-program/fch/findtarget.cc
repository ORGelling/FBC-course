#include "fch.ih"

    // by process.cc

bool Fch::findTarget()
{
    d_location = d_line.find(d_target, d_location);     // check if target is
                                                        // present in line
    return d_location != string::npos;
}
