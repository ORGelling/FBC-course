#include "arg.ih"

    // by 

Arg::~Arg()
{
    //destroy s_instance
    delete s_instance;
    s_instance = nullptr;
}
