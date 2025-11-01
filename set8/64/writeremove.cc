#include "main.ih"

int writeremove(Arg &arg, fstream &file, string **args)
{
    if (not file.is_open())
        return 1;

    int clip = -1;
    if (arg.option(args[2], 'r'))
        clip = stoi(*args[2]);
    int add = countlines(file);
    if (arg.option(args[3], 'i'))
        add = stoi(*args[3]);
    
    file.clear(); 
    file.seekg(0);
    
    process(arg, file, args, add, clip);
    
    file.close();                  
    
    remove(args[0]->c_str());
    rename((*args[0] + ".tmp").c_str(), args[0]->c_str());
    
    return 0;
}
