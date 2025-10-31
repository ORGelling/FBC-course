#include "main.ih"

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"filename", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
        Arg::LongOption{"input", 'i'}, // Arg::Required},
        Arg::LongOption{"remove", 'r'},
        Arg::LongOption{"display", 'd'},
    };
    auto longEnd = longOptions + std::size(longOptions);
}

int main(int argc, char **argv)
try
{
    //Arg &arg = Arg::initialise("f:h:v:qx:y:", argc, argv);
    Arg &arg = Arg::initialise("hvf:i:r:d", 
                    longOptions, longEnd, argc, argv);
    // code using arg, etc.
    string *filename = new string;
    string *inputLineNr = new string;
    [[maybe_unused]] string *value = new string;
    
    if (arg.option('h'))
        return usage(0);
   
    fstream file;
    
    if (arg.option(filename, 'f'))
    {
        file.open(*filename, ios::in | ios::app);
    
        if (arg.option(inputLineNr, "input"))
            file << *inputLineNr << endl;
    }
    
    if (arg.option(inputLineNr, 'r') and file.is_open())
    {
        file.clear();
        file.seekg(0);
        size_t lineNr = 0;
        string temp;
        ofstream tempfile{ *filename + ".tmp" };
        while (getline(file, temp))
        {
            if (lineNr != stoull(*inputLineNr))
                tempfile << temp << '\n';
            ++lineNr;
        }
        file.close();
        tempfile.close();
        remove(filename->c_str());
        rename((*filename + ".tmp").c_str(), filename->c_str());
    }
    
    if (arg.option('d'))
    {
        ifstream read{ *filename };
        
        if (not read.is_open())
            return 1;
        
        string temp;
        while(getline(read, temp))
            cout << temp << '\n';
    }
}
catch (...)
{}
