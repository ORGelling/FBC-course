//JB: 1
#include "main.ih"

namespace {
    
    system_clock::duration getOffset(char const *offsetRaw)
    {
        int const offsetValue = stoi(offsetRaw);    // is rather forgiving
        system_clock::duration offset{};            // see info for comments
        
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
                //JB: Then I'd throw, I think.
                cerr << "Time type must be s, m, or h\n";
            break;
        }
        
        return offset;
    }
    
    void showTime(time_point<system_clock> const timePoint)
    {
        time_t const time = system_clock::to_time_t(timePoint);
                                        // we convert here so we don't need 
                                        // multiple conversions inside main,
                                        // keeps things clean and readable
        
        cout <<   "Local:   " << put_time(localtime(&time), "%c")
            << "\nGMT:     " << put_time(gmtime(&time), "%c")
            << '\n';
    }
}


int main(int argc, char **argv)
try
{
    if (argc != 2)
    {
        cerr << "Not enough arguments\n";       // could also throw here
        return 1;
    }
    
    time_point const now = system_clock::now();
    system_clock::duration const offset = getOffset(argv[1]);
    
    cout << "Current:\n";               // I hope this is better!
    showTime(now);                      // nicely refactored,
    cout << "Offset:\n";                // responsibilities separated
    showTime(now + offset);
}
catch (...)
{
    cerr << "Error parsing input\n";
    //JB: Koen discovered that cleanup is not ensured if we throw here.
    //JB: Therefore we must return, and I stand corrected.
    throw;
}
