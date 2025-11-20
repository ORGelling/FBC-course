#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    
    ostream out(cout.rdbuf());
    
    out.setstate(ios::failbit);
    
    size_t const count = stoull(argv[1]);
    for (size_t index = 0; index != count; ++index)
    {
        //if (out.good())
        out << "Nr. of command line arguments " << argc << '\n'; 
    }
}
