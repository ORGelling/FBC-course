#include "compilefork.ih"

    // by 

vector<string> CompileFork::split() const
{
    istringstream iss(d_command);
    vector<string> args;
    
    string token;
    while (iss >> token)
        args.push_back(token);
    
    return args;
}
