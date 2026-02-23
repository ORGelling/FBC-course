#include "main.ih"

namespace {
    
    //: input formatting helper class
    class Line : public string              // this small class serves to
    {};                                     // read input per whole line
    
    istream &operator>>(istream &in, Line &line)
    {                                       
        getline(in, line);                  // extraction op uses getline
        return in;                          // to read until newline char
    }                                       // instead of until whitespace
    
    
    ifstream openStream(char *name)         // small helper to open stream
    {
        ifstream tmpIn{ name };
        
        if (not tmpIn.is_open())
            throw runtime_error{ "Could not open stream" };
                                            
        return tmpIn;                       // calling move() here prevents
    }                                       // elision. Compiler elides/moves 
                                            // the stream as needed
    
    void show(Storage<string> &store)       // to verify if our demo works
    {
        for (auto const &entry : store.data())
            cout << *entry << '\n';
    }
}  

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cerr << "name file to open\n";
        return 1;
    }
    
    ifstream in = openStream(argv[1]);
    
    Storage<string> store;
    
    copy(istream_iterator<Line>(in), istream_iterator<Line>(), 
                                            std::back_inserter(store));
    show(store);
    
    sort(store.begin(), store.end());
    
    cout << "=================================================\n";
    show(store);
    
    sort(store.rbegin(), store.rend());
    
    cout << "=================================================\n";
    show(store);
}
