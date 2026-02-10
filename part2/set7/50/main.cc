#include "main.ih"

int main(int argc, char **argv)
try
{
    hours const inputHours{ stoul(argv[1]) };       // receive input from cl
    seconds const inputSeconds{ stoul(argv[2]) };
    
                                                    // we convert them 
                                                    // both to minutes: 
    
    minutes const convertHoursToMinutes = inputHours;
                                                // implicit conversion is
                                                // available when casting from
                                                // larger to smaller units
    
//  minutes const hrsToMins2 = duration_cast<minutes>(inputHours); 
                                                    // the explicit cast
                                                    // which we don't need
    
    minutes const convertSecondsToMinutes = 
                                        duration_cast<minutes>(inputSeconds);
                                                // only explicit cast is 
                                                // possible here. It takes 
                                                // the floor value
    
    cout << convertHoursToMinutes << '\n'       // we show the output.
         << convertSecondsToMinutes << '\n';    // separate numeric component 
}                                               // is reached with .count()
catch (...)
{
    cerr << "Error parsing input with stoul\n";
    return 1;
}
