// ES: 1
#include "main.ih"

int main(int argc, char **argv)
try
{
    vector<size_t> rngVec;
    
    FillUnique filler{ stoul(argv[1]), stoul(argv[2]), stoul(argv[3]) };
    filler.fill(rngVec);
    
    copy(rngVec.begin(), rngVec.end(), 
                    ostream_iterator<size_t>{ cout, " " });
    cout << '\n';
}
catch (...)
{
    return handleExceptions();
}
