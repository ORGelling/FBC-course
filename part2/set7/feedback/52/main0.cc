#include "main.ih"

// First method: Calling defined Handler object 

int main(int argc, char **argv)
try
{
    ofstream out;
    string text;
    getInput(argc, argv, out, text);
    
    Handler textShift;
        // We pass:                     v address of object to run it on
    thread getShifty1{ &Handler::shift, &textShift, ref(out), ref(text) };
        // we pass:    ^ address of function        ^         ^ fn arguments
    
    getShifty1.join();
}
catch (int const errCode)
{
    cerr << "Error " << errCode << " while parsing input.\n";
    return errCode;
}
//JB: OTher exceptions not caught.
