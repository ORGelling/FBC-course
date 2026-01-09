#include "main.ih"

namespace {
    
    system_clock::duration getOffset(string const &offsetRaw)
    {
        int offsetValue = stoul(offsetRaw.substr(0, offsetRaw.size() - 1));
        system_clock::duration offset{};
        
        switch(offsetRaw.back())
        {
            case 's':
                offset = seconds{ offsetValue };
                cout << "\nChanging time by " << offsetValue << " seconds\n";
                break;
            case 'm':
                offset = minutes{ offsetValue };
                cout << "\nChanging time by " << offsetValue << " minutes\n";
                break;
            case 'h':
                offset = hours{ offsetValue };
                cout << "\nChanging time by " << offsetValue << " hours\n";
                break;
            default:
                cerr << "Time type must be s, m, or h\n";
                throw;                          // simple throw to trigger 
        }                                       // main's input error catch
        
        return offset;
    }
    
}


int main(int argc, char **argv)
try
{
    time_point now = system_clock::now();
    time_t now_t = system_clock::to_time_t(now);
    
    cout << "Local time: "
         << put_time(localtime(&now_t), "%c")
         << "\nGMT time:   "
         << put_time(gmtime(&now_t), "%c") << '\n';
    
    if (argc != 2)
        return 1;
    
    system_clock::duration offset = getOffset(argv[1]);
    
    time_t newNow = system_clock::to_time_t(now + offset);
    
    cout << "\nNew local:  " << put_time(localtime(&newNow), "%c")
         << "\nNew GMT:    " << put_time(gmtime(&newNow), "%c") << '\n';
}
catch (...)
{
    cerr << "Could not parse input\n";
    return 1;
}
