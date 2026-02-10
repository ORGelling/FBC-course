#include "compilefork.ih"

    // by 

vector<string> CompileFork::split() const       // splits up the string
{
    istringstream iss(d_command);                   // we use sstream to make
    vector<string> args;                            // cutting leading and 
                                                    // trailing blanks easier
    string token;
    while (iss >> token)
        args.push_back(token);
    
    return args;
}
