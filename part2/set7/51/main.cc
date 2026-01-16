#include "main.ih"

namespace {
    
    system_clock::duration getOffset(char const *offsetRaw)
    {
        int const offsetValue = stoi(offsetRaw);    // is rather forgiving
        system_clock::duration offset{};
        
        switch(offsetRaw[strlen(offsetRaw) - 1])
        {
            case 's':
                offset = seconds{ offsetValue };
            break;
            case 'm':
                offset = minutes{ offsetValue };
            break;
            case 'h':
                offset = hours{ offsetValue };
            break;
            default:
                cerr << "Time type must be s, m, or h\n";
            break;
        }
        
        return offset;
    }
    
    void showTime(time_point<system_clock> const timePoint)
    {
        time_t const time = system_clock::to_time_t(timePoint);
        
        cout <<   "Local:   " << put_time(localtime(&time), "%c")
            << "\nGMT:     " << put_time(gmtime(&time), "%c")
            << '\n';
    }
}


int main(int argc, char **argv)
try
{
    if (argc != 2)
        return 1;
    
    time_point now = system_clock::now();
    system_clock::duration offset = getOffset(argv[1]);
    
    cout << "Current:\n";
    showTime(now);
    cout << "Offset:\n";
    showTime(now + offset);
}
catch (...)
{
    cerr << "Could not parse input\n";
    throw;
}
