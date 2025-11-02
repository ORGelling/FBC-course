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
    file.clear();                   // prep file for reading
    file.seekg(0);
    
    int lineNr = 0;
    string temp;
    ofstream tempfile{ args[0] + ".tmp" };      // create temp file
    while (getline(file, temp))
    {
        if (lineNr == add and arg.option(&args[1], 'w'))    // insert new
            tempfile << args[1] << '\n';                    // line
        if (not arg.option('r') || lineNr != clip)  // copy lines unless
            tempfile << temp << '\n';               // clip index met
        ++lineNr;
    }
    if (lineNr == add and arg.option('w'))          // else append
        tempfile << args[1] << '\n';

    file.close();
    tempfile.close();
}
