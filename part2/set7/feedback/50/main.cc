//JB: ?
//JB: COCO
//JB: Many variables. With all actually being modifiable, I'm losing track.
#include "main.ih"

int main(int argc, char **argv)
try
{
    hours hrs{ stoul(argv[1]) };
    
    minutes hrsToMins = hrs;                                // implicit
    minutes hrsToMins2 = duration_cast<minutes>(hrs);       // explicit
    cout << hrsToMins << ' ' << hrsToMins2 << '\n';
    
    seconds scnds{ stoul(argv[2]) };
    
    minutes scndsToMins = duration_cast<minutes>(scnds);    // only explicit
    cout << scndsToMins << '\n';
}
catch (...)
{
    cerr << "Error parsing input with stoul\n";
    return 1;
}
