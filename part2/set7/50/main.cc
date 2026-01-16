#include "main.ih"

int main(int argc, char **argv)
try
{
    hours const inputHours{ stoul(argv[1]) };       // receive input from cl
    seconds const inputSeconds{ stoul(argv[2]) };
    
    minutes const convertHoursToMinutes = inputHours;
                                        // implicit conversion is available 
                                        // when no fractions will result

//  minutes const hrsToMins2 = duration_cast<minutes>(inputHours); 
                                        // the explicit version
    
    minutes const convertSecondsToMinutes = 
                                        duration_cast<minutes>(inputSeconds);
                                            // only explicit cast possible, 
                                            // takes the floor value
    
    cout << convertHoursToMinutes << '\n' 
         << convertSecondsToMinutes << '\n';    
}
catch (...)
{
    cerr << "Error parsing input with stoul\n";
    return 1;
}
