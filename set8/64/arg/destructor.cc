#include "arg.ih"

    // by 

Arg::~Arg()
{                                   // Most work is done by sub classes
    s_instance = nullptr;
}   // This seems to not even necessarily be needed!
