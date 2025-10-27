#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>    // for time()

using namespace std;

ostream &now(ostream &os)                   // free function, no ns needed
{
    [[maybe_unused]] time_t time1 = chrono::system_clock::to_time_t( 
                                            chrono::system_clock{}.now() );
    time_t time2 = time(nullptr);
    char const *asctimeformat = "%a %b %e %H:%M:%S %Y";
    // char const *format = "%c"; // the easy way
    
    return os << put_time(localtime(&time2), asctimeformat);
}

int main()
{
    cout << now << '\n';
}
