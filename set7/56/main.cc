#include "main.ih"

int main(int argc, char *argv[])
{
    // if -a flag output all processes
    
    bool showAll = false;
    string fileName = "/var/log/account/pacct";
    size_t argcount = argc;
    for (size_t index = 1; index != argcount; ++index)
    {
        string arg = argv[index];
        
        if (arg == "-a")
            showAll = true;
        else
            fileName = arg;
    }
   
    ProcAcc logs(fileName);
    
    logs.process(showAll);
}
