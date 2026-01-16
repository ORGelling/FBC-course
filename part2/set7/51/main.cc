#include "main.ih"

namespace {
    
    system_clock::duration getOffset(char const *offsetRaw)
    {
        size_t const offsetValue = stoul(offsetRaw);  // is rather forgiving
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
    
    void showTimes(time_t const now_t, time_t const offset_t)
    {
        cout <<   "Local time:   " << put_time(localtime(&now_t), "%c")
             << "\nGMT time:     " << put_time(gmtime(&now_t), "%c")
             << "\nOffset local: " << put_time(localtime(&offset_t), "%c")
             << "\nOffset GMT:   " << put_time(gmtime(&offset_t), "%c") 
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
    
    showTimes(system_clock::to_time_t(now),             // still kinda clunky
              system_clock::to_time_t(now + offset));
}
catch (...)
{
    cerr << "Could not parse input\n";
    throw;
}
