#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    
    ostream out(cout.rdbuf());
    
    out.setstate(ios::failbit);
    
    for (size_t index = 0; index != stoull(argv[1]); ++index)
    {
        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n'; 
    }
}
