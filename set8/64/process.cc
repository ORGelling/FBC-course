#include "main.ih"

void process
(
    Arg &arg, 
    fstream &file, 
    string *args, 
    int const add, 
    int const clip
)
{
    file.clear();
    file.seekg(0);
    
    int lineNr = 0;
    string temp;
    ofstream tempfile{ args[0] + ".tmp" };
    while (getline(file, temp))
    {
        if (lineNr == add and arg.option(&args[1], 'w'))
            tempfile << args[1] << '\n';
        if (not arg.option('r') || lineNr != clip)
            tempfile << temp << '\n';
        ++lineNr;
    }
    if (lineNr == add and arg.option('w'))
        tempfile << args[1] << '\n';

    file.close();
    tempfile.close();
}
