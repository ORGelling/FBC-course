#include "workforce.ih"

    // by 

void WorkForce::run(string const read, string const write)
{
    // open streams?
    ifstream in(read);
    ofstream out(write);
    if (not in.is_open())
        throw runtime_error{ "Could not open "s + read };
    if (not out.is_open())
        throw runtime_error{ "Could not open "s + write };
    
    run(in, out);
}
