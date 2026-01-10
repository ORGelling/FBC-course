#include "main.ih"

// First method: Calling defined Handler object 

int main(int argc, char **argv)
try
{
    ofstream out;
    string text;
    getInput(argc, argv, out, text);
    
    Handler textShift;
    thread getShifty1{ &Handler::shift, &textShift, ref(out), ref(text) };
    getShifty1.join();
}
catch (int const errCode)
{
    cerr << "Error " << errCode << " while parsing input.\n";
    return errCode;
}
