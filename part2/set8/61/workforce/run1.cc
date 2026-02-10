#include "workforce.ih"

    // by 

void WorkForce::run(string const read, string const write)
{
    ifstream in(read);              // open streams
    ofstream out(write);
    if (not in.is_open())           // verify them
        throw runtime_error{ "Could not open "s + read };
    if (not out.is_open())
        throw runtime_error{ "Could not open "s + write };
    
    run(in, out);                   // call other run function
}
