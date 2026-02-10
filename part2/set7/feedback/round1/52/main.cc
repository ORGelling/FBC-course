//JB: 1
#include "main.ih"

// Second method: defining Handler inside thread function

namespace {

    //JB: Not what we had in mind, but AE.
    void shiftCaller(ostream &out, string const &text)
    {
        Handler textShift2;
        
        textShift2.shift(out, text);
    }
}

int main(int argc, char **argv)
try
{
    ofstream out;
    string text;
    getInput(argc, argv, out, text);
    
    thread getShifty2{ shiftCaller, ref(out), ref(text) };
    getShifty2.join();
}
catch (int const errCode)
{
    cerr << "Error " << errCode << " while parsing input.\n";
    return errCode;
}
