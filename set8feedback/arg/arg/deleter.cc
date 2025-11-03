#include "arg.ih"

Arg::Deleter::~Deleter()
{
    delete d_arg;           // delete the dynamically allocated Arg object
}

