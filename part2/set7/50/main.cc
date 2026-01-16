#include "main.ih"

int main(int argc, char **argv)
try
{
    hours const hrs{ stoul(argv[1]) };
    
    minutes const hrsToMins = hrs;                              // implicit
    minutes const hrsToMins2 = duration_cast<minutes>(hrs);     // explicit
    cout << hrsToMins << ' ' << hrsToMins2 << '\n';
    
    seconds const scnds{ stoul(argv[2]) };
    
    minutes const scndsToMins = duration_cast<minutes>(scnds);  // explicit
    cout << scndsToMins << '\n';                                // only!
}
catch (...)
{
    cerr << "Error parsing input with stoul\n";
    return 1;
}
