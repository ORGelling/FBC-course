#include "main.ih"

int writeremove(Arg &arg, fstream &file, string *args)
{
    if (not file.is_open())
        return 1;

    int clip = -1;                      // -1 for not removing line
    if (arg.option(&args[2], 'r'))      // set line to remove
    {
        try { clip = stoi(args[2]); }
        catch (...) 
        { cerr << "could not convert \'" << args[2] << "\' into int\n"; }
    }
    
    int add = countlines(file);         // append new line
    if (arg.option(&args[3], 'i')) 
    {     
        try { add = stoi(args[3]); }    // or insert at given position
        catch (...) 
        { cerr << "could not convert \'" << args[3] << "\' into int\n"; }
    }
    
    process(arg, file, args, add, clip);
    
    remove(args[0].c_str());            // remove old file and rename temp
    rename((args[0] + ".tmp").c_str(), args[0].c_str());
    
    return 0;
}
