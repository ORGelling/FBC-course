//JB: 0
#include "main.ih"

namespace {
    
    system_clock::duration getOffset(string const &offsetRaw)
    {
        //JB: I'd use a string_view here, if at all (!).
        //JB: Also COCO. And TYPE.
        int offsetValue = stoul(offsetRaw.substr(0, offsetRaw.size() - 1));
        system_clock::duration offset{};
        
        switch(offsetRaw.back())
        {
            case 's':
                offset = seconds{ offsetValue };
                //JB: The debug output gives this function two
                //JB: responsibilities and makes it less generic.
                //JB: Ok for now, but in production I'd log to some debug
                //JB: facility(*)
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
                //JB: Will there be an active exception? 
                //JB: Half a point if there is.)
            throw;                              // simple throw to trigger 
        }                                       // main's input error catch
        
        return offset;
    }
    
}


int main(int argc, char **argv)
try
{
    time_point now = system_clock::now();
    time_t now_t = system_clock::to_time_t(now);
    
    cout << "Local time: " << put_time(localtime(&now_t), "%c")
         << "\nGMT time:   " << put_time(gmtime(&now_t), "%c") << '\n';
    
    if (argc != 2)
        return 1;
    
    system_clock::duration offset = getOffset(argv[1]);
    
    time_t newNow = system_clock::to_time_t(now + offset);

    //JB: FACTOR?
    cout << "\nNew local:  " << put_time(localtime(&newNow), "%c")
         << "\nNew GMT:    " << put_time(gmtime(&newNow), "%c") << '\n';
}
catch (...)
{
    cerr << "Could not parse input\n";
    return 1; //JB: Rethrow provides more info to user.
}
/* JB: (*)
 * Even with a separate debug facility, the code that just gets the offset is
 * still interspersed with debug code.
 * If debugging is the only side job your code has, that is not a huge problem.
 * But as soon as other side jobs appear (keeping track of the stack for stack
 * tracing, accounting of resources like run time or access to security-
 * sensitive data, updating a GUI...), the actual payload code can be lost in
 * side-job maintenance. Then it starts making sense to split them. One fancy
 * way of doing that comes from Functional Programming and is called monadic
 * programming.
 * I just wanted to drop that name here in case you ever run into the problem
 * and start wondering. C++ culture has not absorbed it as mainstream (yet?),
 * so you may find the best explanations in books on functional programming.
 */
